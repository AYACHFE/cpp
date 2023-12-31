/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:00:43 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/22 10:10:43 by aachfenn         ###   ########.fr       */
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
	typedef void (Harl::*mp)();
	mp Alist[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string list[4] = {"debug", "info", "warning" , "error"};
	Harl obj;

	int i = 0;
	while (i < 4)
	{
		if (list[i] == level)
		{
			(obj.*(Alist[i]))();
			break;
		}
		i++;
	}
	if (i == 4)
	{
		std::cout << "UNKNOWN COMPLAIN '" << level << "'" << std::endl;
	}
}
