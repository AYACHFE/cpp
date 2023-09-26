/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:51:23 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/26 17:21:00 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::highFivesGuys(void)
{
	std::cout << "HIGH FIVE ;)" << std::endl;
}

FragTrap::FragTrap(std::string newname)  : ClapTrap(newname) 
{
	setname(newname);
	sethitpoints(100);
	setenergypoints(100);
	setattackdamage(30);
	std::cout << "FragTrap builded successfully" <<std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destroyed successfully" <<std::endl;
}
