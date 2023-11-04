/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:51:23 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/05 10:48:50 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::attack(const std::string& target)
{
	if (hitpoints <= 0 || energypoints <= 0 || hitpoints < attackdamage)
		std::cout << "THE PLAYER CAN'T ATTACK" << std::endl;
	else
	{
		hitpoints -= attackdamage;
		energypoints--;
		std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackdamage << " points of damage!" << std::endl;
	}
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "HIGH FIVE ;)" << std::endl;
}

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "fragTrap builded successfully" <<std::endl;
}

FragTrap::FragTrap(FragTrap &copy) {
	std::cout << "fragTrap builded successfully" <<std::endl;
	*this = copy;
}

FragTrap::FragTrap(std::string newname)  : ClapTrap(newname) 
{
	name = newname;
	hitpoints = 100;
	energypoints = 100;
	attackdamage = 30;
	std::cout << "FragTrap builded successfully" <<std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destroyed successfully" <<std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap& newclap)
{
	std::cout << "Copy assignment operator called" << std::endl;
	name = newclap.name;
	hitpoints = newclap.hitpoints;
	energypoints = newclap.energypoints;
	attackdamage = newclap.attackdamage;
	return (*this);
}
