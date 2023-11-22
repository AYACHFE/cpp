/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:30:56 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/22 19:51:36 by aachfenn         ###   ########.fr       */
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

	
	static void fill_database();
	static void fill_input_data(char *file);
};
