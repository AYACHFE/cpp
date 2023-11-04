/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:22:15 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/05 12:00:11 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
	protected:
		std::string name;
		unsigned int hitpoints;
		unsigned int energypoints;
		unsigned int attackdamage;
	public:
	//ORTHO
		ClapTrap();
		ClapTrap(ClapTrap &newclap);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap& newclap);
	//
		ClapTrap(std::string newname);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif