/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:23:59 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/05 11:26:08 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//
void ClapTrap::attack(const std::string& target)
{
	if (hitpoints <= 0 || energypoints <= 0)
		std::cout << "THE PLAYER CAN'T ATTACK" << std::endl;
	else
	{
		energypoints--;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackdamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (energypoints > 0 || hitpoints > 0 || hitpoints > amount)
	{
		hitpoints -= amount;
		std::cout << name << " attacks , causing " << amount << " points of damage!" << std::endl;
	}
	else
		std::cout << "NOT ENOUGH POINTS" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energypoints > 0 && hitpoints > 0)
	{	
		energypoints--;
		hitpoints += amount;
		std::cout << "THE PLAYER HEALED, HITPOINTS ARE NOW AT \"" << hitpoints << "\"" << std::endl;
	}
	else
		std::cout << "NOT ENOUGH POINTS TO HEAL" << std::endl;
}

ClapTrap::ClapTrap() {
	std::cout << "Constructor has been called" <<std::endl;
}

ClapTrap::ClapTrap(std::string newname) : name(newname), hitpoints(10), energypoints(10), attackdamage(0) {
	std::cout << "constructor has been called" <<std::endl;
}

ClapTrap::ClapTrap(ClapTrap &newclap) : name(newclap.name), hitpoints(newclap.hitpoints), energypoints(newclap.hitpoints), attackdamage(newclap.hitpoints) {
	std::cout << "constructor has been called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "destructor has been called" <<std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& newclap)
{
	std::cout << "Copy assignment operator called" << std::endl;
	name = newclap.name;
	hitpoints = newclap.hitpoints;
	energypoints = newclap.energypoints;
	attackdamage = newclap.attackdamage;
	return (*this);
}
