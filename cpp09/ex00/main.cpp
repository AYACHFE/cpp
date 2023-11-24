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
	std::map<string, float> b2;

	b1 = db.fill_database();
	b2 = db.fill_input_data(av[1]);
	// db.check_bases(b1);
	db.check_bases(b2);
	// db.check_dates(b1);
	db.check_dates(b2);
	db.calculater(b1, b2);





	return 0;
}
