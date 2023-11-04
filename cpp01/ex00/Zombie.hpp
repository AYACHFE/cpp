/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:08:19 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/21 13:25:34 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	std::string	name;
public:
	Zombie(std::string name);
	~Zombie();
	void announce();
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif