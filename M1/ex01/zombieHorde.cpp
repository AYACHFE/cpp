/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:51:58 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/21 13:03:26 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name)
{
	Zombie*	zombie = new Zombie[N];
	int	i = 0;	

	while (i < N)
	{
		zombie[i].setname(name);
		i++;
	}
	return (zombie);
}
