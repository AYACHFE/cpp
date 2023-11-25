/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:30:39 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/25 16:05:16 by aachfenn         ###   ########.fr       */
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

string BitcoinExchange::my_trim(string str) {

	int first = 0;
	int last = str.length();
	
	while (str[first] == 32)
		first++;
	while (str[last - 1] == 32)
		last--;
	return (str.substr(first, last));
}

void	pipe_counter(string line) {
	
	int check = 0;
	for (size_t i = 0;i < line.length();i++) {
		if (line[i] == '|')
			check++;
	}
	if (check != 1)
		throw ("Error: syntax error");
}

void	BitcoinExchange::compare_input_to_db(std::map<string, float> db, char *file) {
	string line;
	bool skip_first = true;
	std::ifstream input_file_2(file);
	if (!input_file_2){
		std::cout << "check the INPUT FILE " << std::endl;
		exit(0);
	}

	for (;std::getline(input_file_2, line);) {
		try {
			pipe_counter(line);
			if (skip_first) {
				if (my_trim(line) != "date | value") {
					skip_first = false;
					throw ("Error: first line");
				}
				skip_first = false;
				continue;
			}
			string to_search_for = my_trim(line.substr(0, line.find("|") - 1));
			string second = line.substr(line.find("|") + 1, line.length());
			std::map<string, float>::iterator lb = db.lower_bound(to_search_for);

				check_pos_date(to_search_for);
				check_pos(second);

			if (lb != db.end() && lb->first == to_search_for) {
				cout << to_search_for << " => " << std::atof(second.c_str()) << " = " << std::atof(second.c_str()) * lb->second << endl;
			}
			else {
				// if the date is before 2009 there is a problem and i should print the actual one , not the 
				// previous one
				// cout << to_search_for << " not found and the closest is " 
				cout << to_search_for << " => " << std::atof(second.c_str()) << " = " << std::atof(second.c_str()) * std::prev(lb)->second << endl;
			}
		}
		catch (const char*  error) {
			cout << error << endl;
		}
		catch (...) {
			continue ;
		}
	}
	input_file_2.close();
}

void BitcoinExchange::check_pos(string second) {

	if (std::atof(second.c_str()) < 0)
		throw("Error: not a positive number.") ;

	if (std::atof(second.c_str()) > 1000) {
		throw("Error: too large a number.") ;
	}
}

void BitcoinExchange::check_pos_date(string to_search_for) {
	
		int day_of_month[] = {0, 31 ,28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		int	fir = to_search_for.find("-") + 1;
		int	sec = to_search_for.find("-", fir + 1);
		string month = to_search_for.substr(fir , sec - fir);
		string day = to_search_for.substr(sec + 1, to_search_for.length());
		string year = to_search_for.substr(0, fir - 1);
		// cout << "'" << year << "'" ;
		// cout << "'" << day << "'" ;
		// cout << " '" << month << "'" << endl;
		if (atoi((month.c_str())) < 0 || atoi((month.c_str())) > 12) {

			cout << "Error: bad input => " << to_search_for << endl;
			throw (1);
		}
		if (day_of_month[atoi(month.c_str())] < atoi(day.c_str()) || atoi(day.c_str()) < 0) {
			
			cout << "Error: bad input => " << to_search_for << endl;
			throw (1);
		}
		time_t t = time(NULL);
		struct tm *mytime = std::localtime(&t);
		int my_year = mytime->tm_year + 1900;
    	int my_month = mytime->tm_mon + 1;
    	int my_day = mytime->tm_mday;
		if (to_search_for < "2009-01-02" || std::atoi(year.c_str()) > my_year || \
		std::atoi(month.c_str()) > my_month || std::atoi(day.c_str()) > my_day)
		{
			cout << "Error: bad input => " << to_search_for << endl;
			throw (1);
		}
}

BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(const BitcoinExchange & __unused copy) { *this = copy; }
BitcoinExchange::~BitcoinExchange() {}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange & __unused btc) { return *this ;}