/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:08:20 by aachfenn          #+#    #+#             */
/*   Updated: 2023/12/06 14:48:09 by aachfenn         ###   ########.fr       */
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
	
	
	struct timeval start_1, end_1;
	gettimeofday(&start_1, NULL);
	input = error_check(av);
	merge_insert(input);
	gettimeofday(&end_1, NULL);
	double duration_1 = (end_1.tv_sec - start_1.tv_sec) * 1000000LL + (end_1.tv_usec - start_1.tv_usec);
	///
	struct timeval start_2, end_2;
	gettimeofday(&start_2, NULL);
	list_input = error_check_deq(av);
	merge_insert_list(list_input);
	gettimeofday(&end_2, NULL);
	double duration_2 = (end_2.tv_sec - start_2.tv_sec) * 1000000LL + (end_2.tv_usec - start_2.tv_usec);
	cout << "Time to process a range of " << input.size() << " elements with std::vector : " << duration_1 / 1000000 << " us" << endl;
	cout << "Time to process a range of " << input.size() << " elements with std::list : " << duration_2 / 1000000 << " us" << endl;
}

// int main(int ac, char **av) {
	
// 	vector<int> input;
// 	if (ac <= 1) {
// 		cout << "Input Error." << endl;
// 		exit (0);
// 	}
// 	av++;
// 	input = error_check(av);
// 	merge_insert(input);
	
// }
