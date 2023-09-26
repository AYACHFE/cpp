/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:22:15 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/26 16:54:26 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
		std::string name;
		unsigned int hitpoints;
		unsigned int energypoints;
		unsigned int attackdamage;
	public:
		ClapTrap(std::string newname);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		//
		std::string getname();
		void	setname(std::string newname);
		int gethitpoints();
		void	sethitpoints(int nb);
		int getenergypoints();
		void	setenergypoints(int nb);
		int getattackdamage();
		void	setattackdamage(int nb);
};



#endif