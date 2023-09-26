/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:38:11 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/26 17:23:59 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap trap("first one");
	trap.takeDamage(10);
	trap.attack("aymane");
	trap.attack("mehdi");
	trap.beRepaired(20);
}