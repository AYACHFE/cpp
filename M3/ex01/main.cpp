/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:38:11 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/26 15:23:29 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap trap("first ONE");
	trap.takeDamage(50);
	trap.attack("aymane");
	trap.attack("mehdi");
	trap.beRepaired(2);
}