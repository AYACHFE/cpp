/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:08:20 by aachfenn          #+#    #+#             */
/*   Updated: 2023/12/06 13:16:42 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <sys/time.h>

int main(int ac, char **av) {
	

	vector<int> input;
	list<int> list_input;
	if (ac <= 1) {
		cout << "Input Error." << endl;
		exit (0);
	}
	av++;
	input = error_check(av);
	merge_insert(input);
	cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n";
	list_input = error_check_deq(av);
	merge_insert_list(list_input);
}

// int main(int ac, char **av) {
	
// 	struct timeval start, end;
// 	gettimeofday(&start, NULL);
// 	vector<int> input;
// 	if (ac <= 1) {
// 		cout << "Input Error." << endl;
// 		exit (0);
// 	}
// 	av++;
// 	input = error_check(av);
// 	merge_insert(input);
	
// 	gettimeofday(&end, NULL);
// 	double duration = (end.tv_sec - start.tv_sec) * 1000000LL + (end.tv_usec - start.tv_usec);
	
// 	cout << "Time to process a range of " << input.size() 
// 	<< " elements with std::vector : " << duration / 1000000 << " us" << endl;
// }
