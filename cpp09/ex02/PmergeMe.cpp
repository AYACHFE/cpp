/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:09:18 by aachfenn          #+#    #+#             */
/*   Updated: 2023/12/07 13:05:02 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

typedef std::pair<std::vector<int>, std::vector<int> > pair;
typedef std::pair<std::list<int>, std::list<int> > list_pair;

//-------------------------vector_part-------------------------//
static int counter = 0;

template<typename type>
void swap(type &arg_1, type &arg_2) {
	type tmp = arg_2;
	arg_2 = arg_1;
	arg_1 = tmp;
}

void merge_insert(vector<int> input) {

	vector<int> simple = input;
	
	int i = simple.size();
	int pairs_nb = i / 2;
	int pairs_size = 2;
	recur(simple, pairs_nb, pairs_size);
}


void	recur(vector<int> &simple, int pairs_nb, int pairs_size) {

	vector<int> rest;
	pair my_pair;
	vector<pair> main;
	int i = 0;
	for(i = 0; i < (pairs_nb * pairs_size) ;) {
		my_pair.first.clear();
		my_pair.second.clear();
		for (int j = 0; j < (pairs_size / 2) ; j++) {
			my_pair.first.push_back(simple.at(i++));
		}
		for (int j = 0 ; j < (pairs_size / 2) ; j++) {	
			my_pair.second.push_back(simple.at(i++));
		}
		main.push_back(my_pair);
	}
	if ((size_t)(pairs_nb * pairs_size) != simple.size())
	{
		for(size_t l = i;l < simple.size();l++ ) {
			rest.push_back(simple.at(l));
		}
	}
	vector<pair>::iterator it = main.begin();
	it = main.begin();
	for( ;it != main.end(); it++ ) {
		
		if (it->first.back() > it->second.back())
			swap(it->first, it->second);
		counter++;
	}
	it = main.begin();
	simple.clear();
	for( ;it != main.end(); it++) {

		for (vector<int>::iterator si = it->first.begin() ; si != it->first.end() ; si++) {
			simple.push_back(*si);
		}
		for (vector<int>::iterator si = it->second.begin() ; si != it->second.end() ; si++) {
			simple.push_back(*si);
		}
	}
	bool check = true;
	if (pairs_nb == 1)
		check = false;
	if (check)
		recur(simple, pairs_nb / 2, pairs_size * 2);
	insert(simple, pairs_size, rest);
}

bool compare(vector<int> vec, vector<int> vec_1) {
	counter++;
    return (vec.back() < vec_1.back());
}

void	return_to_my_vector(vector<int> &simple, vector<vector<int> > mai) {

	simple.clear();
	vector<vector<int> >::iterator it = mai.begin();
	for (;it != mai.end(); it++) {
		vector<int>::iterator m = it->begin();
		for (;m != it->end();m++)
			simple.push_back(*m);
	}
}

void	prep_pan_n_main(vector<pair> &gen, vector<vector<int> > &mai, vector<vector<int> > &pan, vector<int> rest) {

	vector<pair>::iterator it = gen.begin();
	mai.push_back(it->first);
	mai.push_back(it->second);
	it++;
	for(;it != gen.end();it++)
		mai.push_back(it->second);
	for(it = gen.begin() + 1;it != gen.end();it++)
		pan.push_back(it->first);
	if (!rest.empty())
		pan.push_back(rest);
}

void insert_pan_in_main(vector<pair> &gen, vector<int> &simple, vector<int> rest) {

	vector<vector<int> > mai;
	vector<vector<int> > pan;
	prep_pan_n_main(gen, mai, pan, rest);
	vector<vector<int> >::iterator pos;
	// if (pair_nb == 1) {
	// 	return_to_my_vector(simple, mai);
	// 	return ;
	// }
	vector<vector<int> >::iterator js_start;
	vector<vector<int> >::iterator js_end;
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
			if (js_start >= pan.end()) {
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
			pos = std::lower_bound(mai.begin(), (mai.begin() + s), *js_start, compare);
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
	return_to_my_vector(simple, mai);
}

void	check_if_sorted(vector<int>  &simple) {
	
	vector<int>::iterator it = simple.begin();
	for (;(it + 1) != simple.end();it++) {
		if ((*(it + 1)) < *it) {
			cout << "\033[31mNOt_sorted\033[0m\n";
			return ;
		}
	}
	vector<int>::iterator itt = simple.begin();
	cout << "After:   ";
	for (;itt != simple.end();itt++)
		cout << *itt << " ";
	cout << endl;
}

void	insert(vector<int>  &simple, int pairs_size, vector<int> rest) {

	vector<int>::iterator it;
	pair my_pair;
	vector<pair> main;
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
	insert_pan_in_main(main, simple, rest);
	if (pairs_size == 2) {
		cout << "\033[31m" << "Vector Compar N: "  <<  counter << "\033[0m" << endl;
		check_if_sorted(simple);
	}
}

vector<int> error_check(char **av) {

	char *tmp;
	vector<int> my_nbrs;
	for (int j = 0;av[j];j++) {
		std::istringstream iss(av[j]);
		std::string token;
		while (iss >> token) {
			
			int nb = strtod(token.c_str(), &tmp);
			if (strlen(tmp) > 0 || nb < 0 || token.find(".") != std::string::npos) {
			
				cout << "Error"	 << endl;
				exit (1);
			}
			my_nbrs.push_back(nb);
		}
	}
	if (my_nbrs.size() <= 1) {
		cout << "Error"	 << endl;
		exit (1);
	}
	vector<int>::iterator it = my_nbrs.begin();
	cout << "Before:  ";
	for (;it != my_nbrs.end();it++)
		cout << *it << " ";
	cout << endl;
	return (my_nbrs);
}

//-------------------------list_part-------------------------//
static int list_counter = 0;

void merge_insert_list(list<int> input) {

	list<int> simple = input;

	int i = simple.size();
	int pairs_nb = i / 2;
	int pairs_size = 2;
	recur_list(simple, pairs_nb, pairs_size);
}


void	recur_list(list<int> &simple, int pairs_nb, int pairs_size) {

	list<int> rest;
	list_pair my_pair;
	list<list_pair> main;
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
		for(size_t l = i;l < simple.size();l++ ) {
			rest.push_back(*s_it++);
		}
	}
	list<list_pair>::iterator it = main.begin();
	it = main.begin();
	for( ;it != main.end(); it++ ) {
		
		if (it->first.back() > it->second.back())
			swap(it->first, it->second);
		list_counter++;
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
	bool check = true;
	if (pairs_nb == 1)
		check = false;
	if (check)
		recur_list(simple, pairs_nb / 2, pairs_size * 2);
	insert_list(simple, pairs_size, rest);
}

void	return_to_my_list_list(list<int> &simple, list<list<int> > mai) {

	simple.clear();
	list<list<int> >::iterator it = mai.begin();
	for (;it != mai.end(); it++) {
		list<int>::iterator m = it->begin();
		for (;m != it->end();m++)
			simple.push_back(*m);
	}
}

void	prep_pan_n_main_list(list<list_pair> &gen, list<list<int> > &mai, list<list<int> > &pan, list<int> rest) {

	list<list_pair>::iterator it = gen.begin();
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

bool compare_list(list<int> vec, list<int> vec_1) {
	list_counter++;
    return (vec.back() < vec_1.back());
}


void insert_pan_in_main_list(list<list_pair> &gen, list<int> &simple, list<int> rest) {

	list<list<int> > mai;
	list<list<int> > pan;
	prep_pan_n_main_list(gen, mai, pan, rest);
	list<list<int> >::iterator pos;
	// if (pair_nb == 1) {
	// 	return_to_my_list_list(simple, mai);
	// 	return ;
	// }
	list<list<int> >::iterator js_start;
	list<list<int> >::iterator js_end;
	list<list<int> >::iterator mai_end;
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
		mai_end = mai.begin();
		for(;;) {
			if (static_cast<size_t>(s) > mai.size())
				s = mai.size();
			for (;s > 0 ;s--)
				mai_end++;
			pos = std::lower_bound(mai.begin(), mai_end, *js_start, compare_list);
			mai.insert(pos, *js_start);
			pan.erase(js_start);
			size++;
			if (js_start == js_end) {
				break ;
			}
			js_start--;
			mai_end--;
		}
		index++;
	}
	return_to_my_list_list(simple, mai);
}

//--------------------------checks the container---------------------------//
void	check_if_sorted_list(list<int> __unused &simple) {
	
	list<int>::iterator it = simple.begin();
	list<int>::iterator itt = simple.begin();
	itt++;
	for (;itt != simple.end();it++) {
		if ((*itt) < *it) {
			
			cout << "\033[31mNOt_sorted\033[0m\n" << endl;
			return ;
		}
		itt++;
	}
}

void	insert_list(list<int>  &simple, int pairs_size, list<int> rest) {

	list<int>::iterator it;
	list_pair my_pair;
	list<list_pair> main;
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
	insert_pan_in_main_list(main, simple, rest);
	if (pairs_size == 2) {
		cout << "\033[31m" << "List Compar N: "  <<  list_counter << "\033[0m" << endl;
		check_if_sorted_list(simple);
	}
}

list<int> error_check_list(char **av) {

	char *tmp;
	list<int> my_nbrs;
	
	for (int j = 0;av[j];j++) {
		std::istringstream iss(av[j]);
		std::string token;
		while (iss >> token) {
			
			int nb = strtod(token.c_str(), &tmp);
			if (strlen(tmp) > 0 || nb < 0) {
			
				cout << "Error"	 << endl;
				exit (1);
			}
			my_nbrs.push_back(nb);
		}
	}
	if (my_nbrs.size() <= 1) {
		cout << "Error"	 << endl;
		exit (1);
	}
	return (my_nbrs);
}
