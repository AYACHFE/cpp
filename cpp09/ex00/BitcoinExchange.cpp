/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:30:39 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/22 20:34:42 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<string, float>	BitcoinExchange::fill_database() {

	bool skip_first_ = true;
	std::ifstream input_file("data.csv");
	if (!input_file){
		std::cout << "check the INPUT FILE " << std::endl;
		exit(0);
	}
	string line;
	std::map<string, float> data;
	for (;std::getline(input_file, line);) {
		try {
			if (skip_first_) {
				skip_first_ = false;
				continue;
			}
			data[line.substr(0,line.find(","))] = std::stof((line.substr(line.find(",") + 1)).c_str());
		}
		catch(...) {
			cout << "error in the btc price" << endl;
		}
	}
	std::map<string, float>::iterator it = data.begin();
	for(;it != data.end(); it++) {

		cout << "key : \"" << it->first  << "\"" << "        |        value : \"" << it->second  << "\"" << endl;
	}
	input_file.close();
	return (data);
}

std::map<string, float>	BitcoinExchange::fill_input_data(char *file) {
	string line;
	bool skip_first = true;
	std::ifstream input_file_2(file);
	if (!input_file_2){
		std::cout << "check the INPUT FILE " << std::endl;
		exit(0);
	}
	// string line;
	std::map<string, float> data_to_sear;
	for (;std::getline(input_file_2, line);) {
		try {
			if (skip_first) {
				skip_first = false;
				continue;
			}
			// cout << line.substr(0,line.find("|") - 1) << "|||" << line.substr(line.find("|") + 2) << endl;
			data_to_sear[line.substr(0,line.find("|") - 1)] = std::stof((line.substr(line.find("|") + 2)).c_str());
		}
		catch(...) {
			cout << "error in the btc price" << endl;
		}
	}
	std::map<string, float>::iterator ite = data_to_sear.begin();
	for(;ite != data_to_sear.end(); ite++) {

		cout << "key_to_search : \"" << ite->first  << "\"" << "        |        value_to_search : \"" 
		<< ite->second  << "\"" << endl;
	}
	input_file_2.close();
	return (data_to_sear);
}

void BitcoinExchange::check_bases(std::map<string, float> data) {

	std::map<string, float>::iterator it;
	for(;it != data.end() ;it++) {
		if (it->second < 0 || it->second > 1000) {
			
			cout << "ERROR in the Bitcoin range PRICE" << it->second << endl;
			exit (1);
		}
	}
}


BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(const BitcoinExchange & __unused copy) {}
BitcoinExchange::~BitcoinExchange() {}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange & __unused btc) { return *this ;}