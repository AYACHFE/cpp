/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:52:03 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/21 13:26:51 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
	std::string name;
	public:
		Zombie();
		~Zombie();
		void		announce();
		std::string	setname(std::string thename);
		std::string	getname();
};

Zombie*	zombieHorde(int N, std::string name);

#endif