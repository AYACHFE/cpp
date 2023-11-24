/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:30:56 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/23 11:56:41 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <array>
#include <vector>
#include <map>
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class BitcoinExchange {
	public:
	//orthodox
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		~BitcoinExchange();
		BitcoinExchange &operator=(const BitcoinExchange & btc);
	//


	std::map<string, float> fill_database();
	std::map<string, float> fill_input_data(char *file);
	void	check_bases(std::map<string, float> data);
	void	check_dates(std::map<string, float> data);
	void	calculater(std::map<string, float> db, std::map<string, float> input);
};
