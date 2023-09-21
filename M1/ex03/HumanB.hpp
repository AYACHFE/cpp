/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:19:35 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/21 13:35:57 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB
#define HUMANB

#include <iostream>
#include "Weapon.hpp"

class HumanB{
	std::string name;
	Weapon weapon;
	public:
		HumanB(std::string thename);
		~HumanB();
		void	setWeapon(Weapon theweapon);
		void	attack();
};


#endif