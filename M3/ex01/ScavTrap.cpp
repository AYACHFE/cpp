/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:56:03 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/26 15:16:22 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string newname)  : ClapTrap(newname) 
{
	setname(newname);
	sethitpoints(100);
	setenergypoints(50);
	setattackdamage(20);
	std::cout << "ScavTrap builded successfully" <<std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destroyed successfully" <<std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
