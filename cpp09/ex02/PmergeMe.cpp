/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:09:18 by aachfenn          #+#    #+#             */
/*   Updated: 2023/12/01 15:52:45 by aachfenn         ###   ########.fr       */
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
	for(;s != simple.end(); s++)
		cout << "simple is ; " << *s << endl;
	cout << "Compar N: " <<  counter << endl;
}

void insert_pan_in_main(vector<pair> &gen, vector<int>  __unused &simple, vector<int> rest) {
	
	vector<pair>::iterator it = gen.begin();
	vector<vector<int> > mai;
	pan_pair pan_iter;
	vector<vector<int> > pan;
	for(;it != gen.end();it++) {
		mai.push_back(it->second);
	}
	for(it = gen.begin();it != gen.end();it++) {
		pan.push_back(it->first);
	}
	if (!rest.empty()) {
		pan.push_back(rest);
		cout << "rest: " << rest.front() << " " << pan.back().back() << endl;
	}
	it = gen.begin();
	vector<vector<int> >::iterator pos;
	vector<vector<int> >::iterator pan_pos = pan.begin();
	int i = 2;
	for (;i < 33;i++) {
		int js_s = (std::pow(2 ,i) - std::pow(-1,i)) / 3;
		int js_e = (std::pow(2 ,i - 1) - std::pow(-1,i - 1)) / 3 + 1;
		cout << "js_start : " << js_s << " js_end : " << js_e << endl;
	}
		for (;pan_pos != pan.end(); pan_pos++) {
		
			pos = std::lower_bound(mai.begin(), mai.end(), *pan_pos, compare);
			mai.insert(pos, *pan_pos);
		}
		if (!rest.empty()) {
			vector<int>::iterator re = rest.begin();
			for (; re != rest.end(); re++)
				cout << "-----> rest == " << *re << endl;
		}
		// if (pan_pos == pan.end()) {
		// 	cout << "______done______\n";
		// 	cout << "js_start : " << js_s << " js_end : " << js_e << endl;
		// 	return_to_my_vector(simple, mai);
		// 	return ;
		// }
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
	// vector<int>::iterator res = rest.begin();
	// if (!rest.empty()) {
	// 	my_pair.first.clear();
	// 	my_pair.second.clear();
		
	// 	for (;res != rest.end();) {
	// 		cout << "+++ " << *res << endl;
	// 		my_pair.first.push_back(*res++);
	// 	}
	// 	main.push_back(my_pair);
	// }

	
	// cout << "--> size = " << main.size() << endl;
	// vector<pair>::iterator ite = main.begin();
	// vector<int>::iterator itt = ite->first.begin();
	// for (;ite != main.end() ; ite++) {
	// 	itt = ite->first.begin();
	// 	cout << " pan: ";
	// 	for (; itt != ite->first.end(); itt++)
	// 		cout  << *itt << " , ";
	// 	itt = ite->second.begin();
	// 	cout << endl << " main: ";
	// 	for (; itt != ite->second.end(); itt++)
	// 		cout << *itt << " , ";
	// 	cout << endl;
	// }
	
	insert_pan_in_main(main, simple, rest);

}

// void error_check(char **av) {
	
// 	int i = 0;
// 	if (string(av[i]))
// }
