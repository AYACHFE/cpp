/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:30:39 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/24 10:36:32 by aachfenn         ###   ########.fr       */
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
	input_file.close();
	// std::map<string, float>::iterator it = data.begin();
	// for(;it != data.end(); it++) {

	// 	cout << "key : \"" << it->first  << "\"" << "        |        value : \"" << it->second  << "\"" << endl;
	// }
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

	std::map<string, float> data_to_sear;
	int i = 40;
	// std::map<string, float>::iterator it = data_to_sear.begin();
	for (;std::getline(input_file_2, line);) {
		try {
			if (skip_first) {
				skip_first = false;
				continue;
			}
			// cout << line.substr(0,line.find("|") - 1) << "|||" << line.substr(line.find("|") + 2) << endl;
			if (data_to_sear.count(line.substr(0,line.find("|") - 1) + "* ") > 0)  {
				if (i == 126)
					i = 40;
				data_to_sear[line.substr(0,line.find("|") - 1) + "*" + static_cast<char>(i++)] = std::atof((line.substr(line.find("|") + 2)).c_str());
			}
			else
				data_to_sear[line.substr(0,line.find("|") - 1) + "* "] = std::atof((line.substr(line.find("|") + 2)).c_str());

		}
		catch(...) {
			cout << "error in the btc price" << endl;
		}
	}
	input_file_2.close();
	// std::map<string, float>::iterator ite = data_to_sear.begin();
	// for(;ite != data_to_sear.end(); ite++) {

	// 	cout << "key_to_search : \"" << ite->first  << "\"" << "        |        value_to_search : \"" 
	// 	<< ite->second  << "\"" << endl;
	// }
	return (data_to_sear);
}

void BitcoinExchange::check_bases(std::map<string, float> data) {

	std::map<string, float>::iterator it = data.begin();
	for(;it != data.end() ;it++) {
		// cout << it->second << endl;
		if (it->second < 0 || it->second > 1000) {
			
			cout << "ERROR in the Bitcoin range PRICE \"" << it->second << "\"" << endl;
			exit (1);
		}
	}
}

void BitcoinExchange::check_dates(std::map<string, float> data) {
	
	std::map<string, float>::iterator it = data.begin();
	int day_of_month[] = {0, 31 ,28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for(;it != data.end();it++) {
		int	fir = it->first.find("-") + 1;
		int	sec = it->first.find("-", fir + 1);
		// cout << "f " << fir << " s " << sec << endl;
		string month = it->first.substr(fir , sec - fir);
		string day = it->first.substr(sec + 1, it->first.length());
		// cout << "'" << day << "'" ;
		// cout << "'" << month << "'" << endl;
		if (atoi((month.c_str())) < 0 || atoi((month.c_str())) > 12) {
			
			cout << "error in the month in this DATe " << it->first << endl;
			exit (0);
		}
		if (day_of_month[atoi(month.c_str())] < atoi(day.c_str()) || atoi(day.c_str()) < 0) {
			
			cout << "error in the day in this DATe " << it->first << endl;
			exit (0);
		}
	}
}

void BitcoinExchange::check_pos(std::map<string, float>::iterator it) {

	if (it->second < 0)
		throw("Error: not a positive number.") ;

	if (it->second > 1000) {
		// cout << "ERROR in the Bitcoin range PRICE \"" << it->second << "\"" << endl;
		throw("Error: too large a number.") ;
	}
}

void BitcoinExchange::check_pos_date(std::map<string, float>::iterator it) {
	
	// std::map<string, float>::iterator it = data.begin();
	int day_of_month[] = {0, 31 ,28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	// for(;it != data.end();it++) {
		int	fir = it->first.find("-") + 1;
		int	sec = it->first.find("-", fir + 1);
		// cout << "f " << fir << " s " << sec << endl;
		string month = it->first.substr(fir , sec - fir);
		string day = it->first.substr(sec + 1, it->first.length());
		// cout << "'" << day << "'" ;
		// cout << "'" << month << "'" << endl;
		if (atoi((month.c_str())) < 0 || atoi((month.c_str())) > 12) {
			
			// throw (it->first.c_str());
			// throw (it->first.substr(0, it->first.length() - 2).c_str());
			cout << "Error: bad input => " << it->first.substr(0, it->first.length() - 2) << endl;;
			throw (1);

			// cout << "error in the month in this DATe " << it->first << endl;
			// exit (0);
		}
		if (day_of_month[atoi(month.c_str())] < atoi(day.c_str()) || atoi(day.c_str()) < 0) {
			
			// cout << "Error: bad input => ";
			// throw (it->first.c_str());
			cout << "Error: bad input => " << it->first.substr(0, it->first.length() - 2) << endl;;
			throw (1);
			// cout << "error in the day in this DATe " << it->first << endl;
			// exit (0);
		}
	// }
}


void	BitcoinExchange::calculater(std::map<string, float> db, std::map<string, float> input) {
	
	std::map<string, float>::iterator ite = input.begin();
	
	for (;ite != input.end() ; ite++) {

		try {

			check_pos(ite);
			check_pos_date(ite);

			string to_search_for = ite->first.substr(0, ite->first.find("*"));
			std::map<string, float>::iterator lb = db.lower_bound(to_search_for);
			if (lb != db.end() && lb->first == to_search_for) {
				// cout << to_search_for << " founded ;)" << endl;
				cout << to_search_for << " => " << ite->second << " = " << ite->second * lb->second << endl;
			}
			else {
				// if the date is before 2009 there is a problem and i should print the actual one , not the 
				// previous one
				// cout << to_search_for << " not found and the closest is " 
				cout << std::prev(lb)->first << " => " << ite->second << " = " << ite->second * std::prev(lb)->second << endl;
			}
		}
		catch (const char*  error) {
			cout << error << endl;
		}
		catch (...) {
			continue ;
		}
	}
}


BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(const BitcoinExchange & __unused copy) {}
BitcoinExchange::~BitcoinExchange() {}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange & __unused btc) { return *this ;}