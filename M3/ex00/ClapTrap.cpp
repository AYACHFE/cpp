/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:23:59 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/25 15:24:12 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target){
	if (hitpoints > 0 && hitpoints >= 10)
	{
		hitpoints -= attackdamage;
		energypoints--;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackdamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "THE PLAYER CAN'T ATTACK" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	attackdamage = amount;
	std::cout << "THE ATTACKDAMAGE IS SET TO " << attackdamage << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energypoints > 0 || hitpoints > 0){	
		energypoints--;
		hitpoints += amount;
		std::cout << "THE PLAYER HEALED, HITPOINTS ARE NOW AT \"" << hitpoints << "\"" << std::endl;
	}
	else
		std::cout << "NOT ENOUGH POINTS" << std::endl;
}

ClapTrap::ClapTrap(std::string newname) : name(newname), hitpoints(10), energypoints(10), attackdamage(0) {
	std::cout << "constructor has been called" <<std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "destructor has been called" <<std::endl;
}
