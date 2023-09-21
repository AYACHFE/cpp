/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:00:43 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/21 13:38:00 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{	
};

Harl::~Harl() 
{
};

void Harl::debug() {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-\
triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info() {
	std::cout << "I cannot believe adding extra bacon costs more money\
. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
	std::cout << "I think I deserve to have some extra bacon for free\
. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::map<std::string, Harlenum> stringToEnumMap;
	stringToEnumMap["debug"] = Debug;
	stringToEnumMap["info"] = Info;
	stringToEnumMap["warning"] = Warning;
	stringToEnumMap["error"] = Error;

	std::map<std::string, Harlenum>::iterator it = stringToEnumMap.find(level);
	switch (it->second) {
		case Debug:
			debug();
			break;
		case Info:
			info();
			break;
		case Warning:
			warning();
			break;
		case Error:
			error();
			break;
		default:
			std::cout << "UNKNOWN COMPLAIN '" << level << "'" << std::endl;
	}
}
