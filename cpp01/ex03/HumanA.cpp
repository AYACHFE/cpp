/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:18:46 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/21 21:19:39 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string thename, Weapon &theweapon) : weapon(theweapon)
{
	name = thename;
}
HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() <<std::endl;
}
