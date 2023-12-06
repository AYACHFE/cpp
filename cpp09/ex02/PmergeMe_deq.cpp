/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe_deq.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:08:27 by aachfenn          #+#    #+#             */
/*   Updated: 2023/12/06 13:52:45 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

typedef std::pair<std::list<int>, std::list<int> > pair;

void merge_insert_list(list<int> input) {

	list<int> simple = input;
	
	int i = simple.size();
	int pairs_nb = i / 2;
	int pairs_size = 2;
	recur_deq(simple, pairs_nb, pairs_size);
}

static int counter = 0;

void	recur_deq(list<int> &simple, int pairs_nb, int pairs_size) {
	
	cout << "pair nb ; " << pairs_nb << " | pairs size ; " << pairs_size << endl;
	
	list<int> rest;
	pair my_pair;
	list<pair> main;
	list<int>::iterator s_it = simple.begin();
	int i = 0;
	for(i = 0; i < (pairs_nb * pairs_size) ;) {
		my_pair.first.clear();
		my_pair.second.clear();
		for (int j = 0; j < (pairs_size / 2) ; j++) {
			my_pair.first.push_back(*s_it++);
			i++;
		}
		for (int j = 0 ; j < (pairs_size / 2) ; j++) {	
			my_pair.second.push_back(*s_it++);
			i++;
		}
		main.push_back(my_pair);
	}
	if ((size_t)(pairs_nb * pairs_size) != simple.size())
	{
		cout << "\033[31mrest stored\033[0m\n";
		for(size_t l = i;l < simple.size();l++ ) {
			rest.push_back(*s_it++);
		}
	}
	list<pair>::iterator it = main.begin();
	it = main.begin();
	for( ;it != main.end(); it++ ) {
		
		if (it->first.back() > it->second.back())
			swap(it->first, it->second);
		counter++;
	}
	it = main.begin();
	simple.clear();
	for( ;it != main.end(); it++) {

		for (list<int>::iterator si = it->first.begin() ; si != it->first.end() ; si++) {
			simple.push_back(*si);
		}
		for (list<int>::iterator si = it->second.begin() ; si != it->second.end() ; si++) {
			simple.push_back(*si);
		}
	}
	for (list<int>::iterator l = simple.begin() ;l != simple.end(); ++l)
		cout << *l << " | ";
	cout << endl;
	bool check = true;
	if (pairs_nb == 1)
		check = false;
	if (check)
		recur_deq(simple, pairs_nb / 2, pairs_size * 2);
	insert_deq(simple, pairs_nb, pairs_size, rest);
}

void	return_to_my_list_deq(list<int> &simple, list<list<int> > mai) {

	simple.clear();
	list<list<int> >::iterator it = mai.begin();
	for (;it != mai.end(); it++) {
		list<int>::iterator m = it->begin();
		for (;m != it->end();m++)
			simple.push_back(*m);
	}
	list<int>::iterator s = simple.begin();
	cout << "simple is --> ";
	for(;s != simple.end(); s++)
		cout << *s << " | ";
	cout << endl << "Compar N: " <<  counter << endl;
}

void print_v_to_v_deq(list<list<int> > m) {
	list<list<int> >::iterator it = m.begin();

	for (;it != m.end() ;it++) {
		list<int>::iterator inner = it->begin();
		cout << "--\n";
		for (;inner != it->end();inner++) {
			cout << "Inner : " << *inner << endl;
		}
	}
}

void	prep_pan_n_main_deq(list<pair> &gen, list<list<int> > &mai, list<list<int> > &pan, list<int> rest) {

	list<pair>::iterator it = gen.begin();
	mai.push_back(it->first);
	mai.push_back(it->second);
	it++;
	for(;it != gen.end();it++) {
		mai.push_back(it->second);
	}
	it = gen.begin();
	it++;
	for(;it != gen.end();it++) {
		pan.push_back(it->first);
	}
	if (!rest.empty()) {
		pan.push_back(rest);
	}
}

bool compare_deq(list<int> vec, list<int> vec_1) {
	counter++;
    return (vec.back() < vec_1.back());
}


void insert_pan_in_main_deq(list<pair> &gen, list<int> &simple, list<int> rest, int pair_nb) {

	list<list<int> > mai;
	list<list<int> > pan;
	prep_pan_n_main_deq(gen, mai, pan, rest);
	list<list<int> >::iterator pos;
	if (pair_nb == 1) {
		return_to_my_list_deq(simple, mai);
		return ;
	}
	list<list<int> >::iterator js_start;
	list<list<int> >::iterator js_end;
	int index = 0;
	long jb[] = {2, 2, 6, 10, 22, 42, 86, 170, 342, 682, 1366, 2730, 5462, 10922,
	 21846, 43690, 87382, 174762, 349526, 699050, 1398102, 2796202, 5592406, 
	 11184810,22369622, 44739242, 89478486, 178956970, 357913942, 715827882, 
	 1431655766, 2863311530, 5726623062, 11453246122, 22906492246, 45812984490};
	int size = 1;
	int sum = 0;
	while (!pan.empty())
	{
		js_start = pan.begin();
		js_end = pan.begin();
		int i = 0;
		while (i < jb[index] - 1)
		{
			if (js_start == pan.end()) {
				js_start--;
				break ;
			}
			js_start++;
			i++;
		}
		if (js_start == pan.end())
			js_start--;
		sum += jb[index];
		int s = sum + size;
		for(;;) {
			if (static_cast<size_t>(s) > mai.size())
				s = mai.size();
			pos = std::lower_bound(mai.begin(), (mai.end()), *js_start, compare_deq);
			mai.insert(pos, *js_start);
			pan.erase(js_start);
			size++;
			if (js_start == js_end) {
				break ;
			}
			js_start--;
		}
		index++;
	}
	return_to_my_list_deq(simple, mai);
}

//--------------------------checks the container---------------------------//
void	check_if_sorted_deq(list<int> __unused &simple) {
	
	// list<int>::iterator it = simple.begin();
	// for (;(it + 1) != simple.end();it++) {
	// 	if ((*(it + 1)) < *it) {
			
	// 		cout << "\033[31mNOt_sorted\033[0m\n" << endl;
	// 		return ;
	// 	}
	// 	// cout << "f " << (*(it + 1)) << " s " << *it << endl;
	// }
}


void	insert_deq(list<int>  &simple, int pairs_nb, int pairs_size, list<int> rest) {

	list<int>::iterator it;
	pair my_pair;
	list<pair> main;
	cout << "\033[31m--------------------------------\033[0m\n";
	cout << "pairs_nb : " << pairs_nb << " pairs_size : " << pairs_size << endl;
	for (it = simple.begin(); it != simple.end();) {
		
		my_pair.first.clear();
		my_pair.second.clear();
		for (int i = 0; i < (pairs_size / 2); i++) {
			my_pair.first.push_back(*it++);
		}
		for (int i = 0; i < (pairs_size / 2); i++) {
			my_pair.second.push_back(*it++);
		}
		main.push_back(my_pair);
	}
	insert_pan_in_main_deq(main, simple, rest, pairs_nb);
	if (pairs_size == 2) {
		check_if_sorted_deq(simple);
	}
}

list<int> error_check_deq(char **av) {

	char *tmp;
	list<int> my_nbrs;
	
	for (int j = 0;av[j];j++) {
		std::istringstream iss(av[j]);
		std::string token;
		while (iss >> token) {
			
			double nb = strtod(token.c_str(), &tmp);
			if (strlen(tmp) > 0 || nb < 0) {
			
				cout << "Error"	 << endl;
				exit (1);
			}
			my_nbrs.push_back(nb);
		}
	}
	// list<int>::iterator it = my_nbrs.begin();
	// for (;it != my_nbrs.end();it++)
	// 	cout << *it << endl;
	return (my_nbrs);
}
