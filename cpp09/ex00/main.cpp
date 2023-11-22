/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:30:10 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/22 17:37:54 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <string>

int main(int ac, char **av) {
	(void)av;
	if (ac != 2) {
		cout << "INPUT error !!" << endl;
		return 1;
	}
	
	
	std::ifstream input_file("data.csv");
	if (!input_file){
		std::cout << "check the INPUT FILE " << std::endl;
		exit(0);
	}
	string line;
	std::map<string, float> data;
	for (;std::getline(input_file, line);) {
		try {
			data[line.substr(0,line.find(","))] = std::stof((line.substr(line.find(",") + 1)).c_str());
		}
		catch(...) {
			cout << "error in the btc price" << endl;
		}
	}
	std::map<string, float>::iterator it = data.begin();
	for(;it != data.end(); it++) {

		cout << "key : " << it->first << "        |        value : " << it->second << endl;
	}
	return 0;
}
