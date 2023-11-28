/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:08:20 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/28 10:00:57 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av) {
	
	if (ac < 1) {
		cout << "Input Error." << endl;
		exit (0);
	}

	av++;
	// error_check(av);
	merge_insert(av);
}