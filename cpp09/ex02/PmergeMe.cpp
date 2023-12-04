/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:09:18 by aachfenn          #+#    #+#             */
/*   Updated: 2023/12/04 19:21:36 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

typedef std::pair<std::vector<int>, std::vector<int> > pair;
typedef std::pair<std::vector<int>, std::vector<std::vector<int> >::iterator > pan_pair;


template<typename type>
void swap(type &arg_1, type &arg_2) {
	type tmp = arg_2;
	arg_2 = arg_1;
	arg_1 = tmp;
}

void merge_insert(char **av) {


	vector<int> simple;
	
	int i = 0;
	while (av[i]) {
		simple.push_back(atoi(av[i++]));
	}

	int pairs_nb = i / 2;
	int pairs_size = 2;

	recur(simple, pairs_nb, pairs_size);
}

void	recur(vector<int> &simple, int pairs_nb, int pairs_size) {
	
	cout << "pair nb ; " << pairs_nb << " | pairs size ; " << pairs_size << endl;
	
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
		cout << "\033[31mrest stored\033[0m\n";
		for(size_t l = i;l < simple.size();l++ ) {
			rest.push_back(simple.at(l));
		}
	}
	vector<pair>::iterator it = main.begin();
	it = main.begin();
	for( ;it != main.end(); it++ ) {
		
		if (it->first.back() > it->second.back())
			swap(it->first, it->second);
	}
	// for (it = main.begin(); it!= main.end();it++)
	// {
	// 	vector<int>::iterator itt = it->first.begin();
	// 	for (;itt != it->first.end(); itt++)
	// 		cout << *itt << " - ";
	// 	// cout << endl;
	// 	itt = it->second.begin();
	// 	for (;itt != it->second.end(); itt++)
	// 		cout << " |--> " <<  *itt << " + " ;
	// 	cout << endl;
	// }
	// cout << "-----------\n";
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
	for (vector<int>::iterator l = simple.begin() ;l != simple.end(); ++l)
		cout << *l << " | ";
	cout << endl;
	bool check = true;
	if (pairs_nb == 1)
		check = false;
	if (check)
		recur(simple, pairs_nb / 2, pairs_size * 2);
	insert(simple, pairs_nb, pairs_size, rest);
}

static int counter = 0;

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
	vector<int>::iterator s = simple.begin();
	cout << "simple is --> ";
	for(;s != simple.end(); s++)
		cout << *s << " | ";
	cout << "Compar N: " <<  counter << endl;
}

void print_v_to_v(vector<vector<int> > m) {
	vector<vector<int> >::iterator it = m.begin();

	for (;it != m.end() ;it++) {
		vector<int>::iterator inner = it->begin();
		cout << "--\n";
		for (;inner != it->end();inner++) {
			cout << "Inner : " << *inner << endl;
		}
	}
}

void	prep_pan_n_main(vector<pair> &gen, vector<vector<int> > &mai, vector<vector<int> > &pan, vector<int> &simple, vector<int> rest) {

	vector<pair>::iterator it = gen.begin();
	pan.reserve(simple.size());
	mai.reserve(simple.size());
	mai.push_back(it->first);
	mai.push_back(it->second);
	it++;
	for(;it != gen.end();it++) {
		mai.push_back(it->second);
	}
	for(it = gen.begin() + 1;it != gen.end();it++) {
		pan.push_back(it->first);
	}
	// std::cout << "here pan:   ";
	// 		print_v_to_v(pan);
	if (!rest.empty()) {
		pan.push_back(rest);
		cout << "rest: " << rest.front() << " " << pan.back().back() << endl;
	}

}


void insert_pan_in_main(vector<pair> &gen, vector<int> &simple, vector<int> rest, int pair_nb) {

	vector<vector<int> > mai;
	vector<vector<int> > pan;
	prep_pan_n_main(gen, mai, pan, simple, rest);
	vector<vector<int> >::iterator pos;
	if (pair_nb == 1) {
		return_to_my_vector(simple, mai);
		return ;
	}
	vector<vector<int> >::iterator js_start; 
	vector<vector<int> >::iterator js_end;
	int index = 0;
	long jb[] = {2, 2, 6, 10, 22, 42, 86, 170, 342, 682, 1366, 2730, 5462, 10922,
	 21846, 43690, 87382, 174762, 349526, 699050, 1398102, 2796202, 5592406, 
	 11184810,22369622, 44739242, 89478486, 178956970, 357913942, 715827882, 
	 1431655766, 2863311530, 5726623062, 11453246122, 22906492246, 45812984490};
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
			i++;
			js_start++;
			// cout << "size : " << pan.size() <<endl;
		}
		for(;;) {
			pos = std::lower_bound(mai.begin(), mai.end(), *js_start, compare);
			mai.insert(pos, *js_start);
			pan.erase(js_start);
			if (js_start == js_end) {
				// cout << "}}\n";
				break ;
			}
			js_start--;
		}
		index++;
	}
	// if (!rest.empty()) {
	// 	vector<int>::iterator re = rest.begin();
	// 	for (; re != rest.end(); re++)
	// 		cout << "-----> rest == " << *re << endl;
	// }
	return_to_my_vector(simple, mai);
}

void	insert(vector<int>  &simple, int pairs_nb, int pairs_size, vector<int> rest) {

	vector<int>::iterator it;
	pair my_pair;
	vector<pair> main;
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
	insert_pan_in_main(main, simple, rest, pairs_nb);

}







// void error_check(char **av) {
	
// 	int i = 0;
// 	if (string(av[i]))
// }


// while (!pan.empty())
// {
// 	long jb[] = {2, 2, 6, 10, 22, 42, 86, 170, 342, 682, 1366, 2730, 5462, 10922,
// 	 21846, 43690, 87382, 174762, 349526, 699050, 1398102, 2796202, 5592406, 
// 	 11184810,22369622, 44739242, 89478486, 178956970, 357913942, 715827882, 
// 	 1431655766, 2863311530, 5726623062, 11453246122, 22906492246, 45812984490};
// 	int index = 0;
// 	int i = 0;
// 	vector<vector<int> >::iterator js_start = pan.begin();
// 	vector<vector<int> >::iterator js_end = pan.begin();
	
// 	while (i < jb[index])
// 	{
// 		if (js_start >= pan.end()) {
// 				js_start--;
// 				break ;
// 		}
// 		i++;
// 		js_start++;
// 	}
// 	for(;;) {
// 		if (pan.empty()) {
// 			return_to_my_vector(simple, mai);
// 			return ;
// 		}
// 		pos = std::lower_bound(mai.begin(), mai.end(), *js_start, compare);
// 		mai.insert(pos, *js_start);
// 		pan.erase(js_start--);
// 		// cout << pan.size() << "_-----\n";
		
// 		if (js_start == js_end) {
// 			print_v_to_v(pan);
// 			cout << "}}\n";
// 			break ;
// 		}
// 	}
// 	if (pan.size() == 2) {
// 		return_to_my_vector(simple, mai);
// 		return ;
// 	}
// }






////////////////////////////////////////////////

	// // vector<pair>::iterator it = gen.begin();
	// vector<vector<int> > mai;
	// vector<vector<int> > pan;
	// prep_pan_n_main(gen, mai, pan, simple, rest);
	
	// // pan.reserve(simple.size());
	// // mai.reserve(simple.size());
	// // mai.push_back(it->first);
	// // mai.push_back(it->second);
	// // it++;
	// // for(;it != gen.end();it++) {
	// // 	mai.push_back(it->second);
	// // }
	// // for(it = gen.begin() + 1;it != gen.end();it++) {
	// // 	pan.push_back(it->first);
	// // }
	// // std::cout << "here pan:   ";
	// // 		print_v_to_v(pan);
	// // if (!rest.empty()) {
	// // 	pan.push_back(rest);
	// // 	cout << "rest: " << rest.front() << " " << pan.back().back() << endl;
	// // }

	// vector<vector<int> >::iterator pos;
	// if (pair_nb == 1) {
	// 	return_to_my_vector(simple, mai);
	// 	std::cout << "out--\n";
	// 	return ;
	// }
	// vector<vector<int> >::iterator js_start; 
	// vector<vector<int> >::iterator js_end;
	// while (!pan.empty())
	// {
	// 	long jb[] = {2, 2, 6, 10, 22, 42, 86, 170, 342, 682, 1366, 2730, 5462, 10922,
	// 	 21846, 43690, 87382, 174762, 349526, 699050, 1398102, 2796202, 5592406, 
	// 	 11184810,22369622, 44739242, 89478486, 178956970, 357913942, 715827882, 
	// 	 1431655766, 2863311530, 5726623062, 11453246122, 22906492246, 45812984490};
	// 	js_start = pan.begin();
	// 	js_end = pan.begin();
	// 	int index = 0;
	// 	int i = 0;
		
	// 	while (i < jb[index] - 1)
	// 	{
	// 		if (js_start >= pan.end()) {
	// 				js_start--;
	// 				break ;
	// 		}
	// 		i++;
	// 		js_start++;
	// 		cout << "size : " << pan.size() <<endl;
	// 	}
	// 		int x = 0;
	// 	for(;;) {
	// 		// std::cout << "what to push      --->    " << js_start->back() << std::endl;
	// 		if (js_start != pan.end()) {
				
	// 		pos = std::lower_bound(mai.begin(), mai.end(), *js_start, compare);
	// 		std::cout << x++ << '\n';
	// 		mai.insert(pos, *js_start);
	// 		}
	// 		// std::cout << "pushed :       \n";
	// 		// print_v_to_v(mai);
	// 		pan.erase(js_start);
	// 		if (js_start == js_end) {
	// 			cout << "}}\n";
	// 			break ;
	// 		}
			
	// 		js_start--;
	// 	}
	// 	// print_v_to_v(mai);
	// 	index++;
	// }