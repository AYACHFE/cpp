/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:09:18 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/28 14:26:17 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

typedef std::pair<std::vector<int>, std::vector<int> > pair;


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
	// cout << "pair nb ; " << pairs_nb << " | pairs size ; " << pairs_size << endl;
	
	// pair my_pair;
	// vector<pair> main;

	// for( i = 0; i < pairs_nb * 2 ;) {
	// 	for (int j = 0; j < pairs_size / 2 ; j++) {
			
	// 		my_pair.first.push_back(simple.at(i++));
	// 		// my_pair.second.push_back(simple.at(i++));
	// 	}
	// 	for (int j = 0 ; j < pairs_size / 2 ; j++) {
			
	// 		// my_pair.first.push_back(simple.at(i++));
	// 		my_pair.second.push_back(simple.at(i++));
	// 	}
	// 	main.push_back(my_pair);
	// }

	// cout << "size is : " <<  main.size() << endl;
	
	// vector<pair>::iterator it = main.begin();

	// for( ;it != main.end(); it++ ) {
		
	// 	cout << it->first.back() << " | " << it->second.back() << endl;
	// }
	// it = main.begin();
	// cout << "-----------\n";
	// for( ;it != main.end(); it++ ) {
		
	// 	if (it->first.back() > it->second.back())
	// 		swap(it->first.back(), it->second.back());
		
	// 	cout << it->first.back() << " |--> " << it->second.back() << endl;
		
	// }
	// cout << "-----------\n";
	// it = main.begin();

	// simple.clear();
	// for( ;it != main.end(); it++) {
		
	// 	for (i = 0; i < (pairs_size / 2) ; i++) {
	// 		simple.push_back(it->first.back());
	// 	}
	// 	for (i = 0; i < (pairs_size / 2);i++) {
	// 		simple.push_back(it->second.back());
	// 	}
	// }
	// for (vector<int>::iterator l = simple.begin() ;l != simple.end(); ++l)
	// 	cout << *l << " | ";
	
}

void	recur(vector<int> simple, int pairs_nb, int pairs_size) {

	// int pairs_nb = i / 2;
	// int pairs_size = 2;

	cout << "pair nb ; " << pairs_nb << " | pairs size ; " << pairs_size << endl;
	
	pair my_pair;
	vector<pair> main;
	vector<int> rest;
	int i = 0;
	for(i = 0; i < (pairs_nb * pairs_size) ;) {
		my_pair.first.clear();
		my_pair.second.clear();
		// cout << "before i == : " << i << " pairs_nb : " << pairs_nb << endl;
		for (int j = 0; j < (pairs_size / 2) ; j++) {
			// cout << simple.at(i) << " ls\n";
			my_pair.first.push_back(simple.at(i++));
		}
		for (int j = 0 ; j < (pairs_size / 2) ; j++) {
			
			// cout << simple.at(i) << " lsaas\n";
			my_pair.second.push_back(simple.at(i++));
		}
		// cout << "i == : " << i << " pairs_nb : " << pairs_nb << endl;
		main.push_back(my_pair);
	}
	if ((size_t)(pairs_nb * pairs_size) != simple.size())
	{
		cout << "rest stored\n";
		for(size_t l = i;l < simple.size();l++ ) {
			rest.push_back(simple.at(l));
		}
	}

	cout << "size is : " <<  main.size() << endl;
	
	vector<pair>::iterator it = main.begin();

	for( ;it != main.end(); it++ ) {
		
		cout << it->first.back() << " | " << it->second.back() << endl;
	}
	it = main.begin();
	cout << "-----------\n";
	for( ;it != main.end(); it++ ) {
		
		if (it->first.back() > it->second.back())
			swap(it->first.back(), it->second.back());
		
		// cout << it->first.back() << " |--> " << it->second.back() << endl;
	}
	
	for (it = main.begin(); it!= main.end();it++)
	{
		vector<int>::iterator itt = it->first.begin();
		for (;itt != it->first.end(); itt++)
			cout << *itt << " - ";
		// cout << endl;
		itt = it->second.begin();
		for (;itt != it->second.end(); itt++)
			cout << " |--> " <<  *itt << " + " ;
		cout << endl;
	}
	cout << "-----------\n";
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
	if (pairs_nb == 1)
		exit (0);
	recur(simple, pairs_nb / 2, pairs_size * 2);

	
}

// void error_check(char **av) {
	
// 	int i = 0;
// 	if (string(av[i]))
// }
