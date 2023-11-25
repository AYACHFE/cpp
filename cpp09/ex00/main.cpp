/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:30:10 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/23 11:57:43 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av) {

	if (ac != 2) {
		cout << "INPUT error !!" << endl;
		return 1;
	}
	BitcoinExchange db;
	std::map<string, float> b1;

	b1 = db.fill_database();
	db.compare_input_to_db(b1, av[1]);

	return 0;
}
