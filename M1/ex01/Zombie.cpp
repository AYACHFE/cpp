/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:52:06 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/21 13:26:32 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}
Zombie::~Zombie()
{
	std::cout << name << " has been destroyed" << std::endl;
}

std::string Zombie::setname(std::string thename)
{
	name = thename;
	return (name);
}

std::string Zombie::getname()
{
	return (name);
}

void	Zombie::announce()
{
	std::cout << getname() << " BraiiiiiiinnnzzzZ..." << std::endl;
}
