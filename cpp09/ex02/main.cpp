/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:08:20 by aachfenn          #+#    #+#             */
/*   Updated: 2023/12/06 15:38:00 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <ctime>

int main(int ac, char **av) {

	vector<int> input;
	list<int> list_input;
	if (ac <= 1) {
		cout << "Input Error." << endl;
		exit (0);
	}
	av++;
	clock_t start_1, end_1;
	start_1 = clock();
	input = error_check(av);
	merge_insert(input);
	end_1 = clock();
	double duration_1 = (double)(end_1 - start_1) / CLOCKS_PER_SEC * 1000000;
	///
	clock_t start_2, end_2;
	start_2 = clock();
	list_input = error_check_list(av);
	merge_insert_list(list_input);
	end_2 = clock();
	double duration_2 = (double)(end_2 - start_2) / CLOCKS_PER_SEC * 1000000;
	cout << "Time to process a range of " << input.size() << " elements with std::vector : " << duration_1 / 1000000 << " us" << endl;
	cout << "Time to process a range of " << input.size() << " elements with std::list : " << duration_2 / 1000000 << " us" << endl;
}
