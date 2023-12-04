/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:56:03 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/05 11:17:40 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::attack(const std::string& target){
	if (hitpoints <= 0 || energypoints < 0 || (hitpoints < attackdamage))
		std::cout << "THE PLAYER CAN'T ATTACK" << std::endl;
	else
	{
		hitpoints -= attackdamage;
		energypoints--;
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackdamage << " points of damage!" << std::endl;
	}
}

ScavTrap::ScavTrap() : ClapTrap(){
	std::cout << "scavTrap builded successfully" <<std::endl;
}

ScavTrap::ScavTrap(ScavTrap &copy) {
	std::cout << "scavTrap copy constructor builded successfully" <<std::endl;
	*this = copy;
}

ScavTrap::ScavTrap(std::string newname)  : ClapTrap(newname) 
{
	name = newname;
	hitpoints = 100;
	energypoints = 50;
	attackdamage = 20;
	std::cout << "ScavTrap builded successfully" <<std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destroyed successfully" <<std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
 }

ScavTrap &ScavTrap::operator=(const ScavTrap& newclap)
{
	std::cout << "Copy assignment operator called" << std::endl;
	name = newclap.name;
	hitpoints = newclap.hitpoints;
	energypoints = newclap.energypoints;
	attackdamage = newclap.attackdamage;
	return (*this);
}
