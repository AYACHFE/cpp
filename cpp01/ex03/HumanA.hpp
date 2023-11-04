/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:18:49 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/21 20:17:10 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include "HumanB.hpp"
#include <iostream>

class HumanA{
	std::string name;
	Weapon		&weapon;
	public:
		HumanA(std::string thename, Weapon &theweapon);
		~HumanA();
		void attack();
};


#endif