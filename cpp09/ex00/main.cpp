/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:30:10 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/22 19:53:29 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
	(void)av;
	if (ac != 2) {
		cout << "INPUT error !!" << endl;
		return 1;
	}
	
	
	BitcoinExchange::fill_database();
	//to_my_map
	// bool skip_first_ = true;
	// std::ifstream input_file("data.csv");
	// if (!input_file){
	// 	std::cout << "check the INPUT FILE " << std::endl;
	// 	exit(0);
	// }
	// string line;
	// std::map<string, float> data;
	// for (;std::getline(input_file, line);) {
	// 	try {
	// 		if (skip_first_) {
	// 			skip_first_ = false;
	// 			continue;
	// 		}
	// 		data[line.substr(0,line.find(","))] = std::stof((line.substr(line.find(",") + 1)).c_str());
	// 	}
	// 	catch(...) {
	// 		cout << "error in the btc price" << endl;
	// 	}
	// }
	// std::map<string, float>::iterator it = data.begin();
	// for(;it != data.end(); it++) {

	// 	cout << "key : \"" << it->first  << "\"" << "        |        value : \"" << it->second  << "\"" << endl;
	// }
	// input_file.close();

	BitcoinExchange::fill_input_data(av[1]);
	
	//to_my_map_2
	// string line;
	// bool skip_first = true;
	// std::ifstream input_file_2(av[1]);
	// if (!input_file_2){
	// 	std::cout << "check the INPUT FILE " << std::endl;
	// 	exit(0);
	// }
	// // string line;
	// std::map<string, float> data_to_sear;
	// for (;std::getline(input_file_2, line);) {
	// 	try {
	// 		if (skip_first) {
	// 			skip_first = false;
	// 			continue;
	// 		}
	// 		// cout << line.substr(0,line.find("|") - 1) << "|||" << line.substr(line.find("|") + 2) << endl;
	// 		data_to_sear[line.substr(0,line.find("|") - 1)] = std::stof((line.substr(line.find("|") + 2)).c_str());
	// 	}
	// 	catch(...) {
	// 		cout << "error in the btc price" << endl;
	// 	}
	// }
	// std::map<string, float>::iterator ite = data_to_sear.begin();
	// for(;ite != data_to_sear.end(); ite++) {

	// 	cout << "key_to_search : \"" << ite->first  << "\"" << "        |        value_to_search : \"" 
	// 	<< ite->second  << "\"" << endl;
	// }
	
	return 0;
}
