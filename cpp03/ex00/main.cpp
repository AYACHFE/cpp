/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:38:11 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/26 10:53:04 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap trap("first one");
	trap.takeDamage(1);
	trap.takeDamage(1);
	trap.takeDamage(1);
	trap.attack("aymane");
	trap.attack("aymane_1");
	trap.beRepaired(2);

}
