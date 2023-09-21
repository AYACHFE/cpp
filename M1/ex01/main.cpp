/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:48:30 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/21 13:03:11 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* horde = zombieHorde(8, "HordeZombie");

	if (horde)
	{
		for (int i = 0; i < 8; ++i) {
			horde[i].announce();
		}
		delete[] horde;
	}
	else
	{
		std::cerr << "Invalid input or memory allocation failed." << std::endl;
	}

	return 0;
}