/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:54:28 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/04 14:01:51 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap:public ClapTrap{
	public:
	//ORTHO
		ScavTrap();
		ScavTrap(ScavTrap &copy);
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap& newclap);
	//
		ScavTrap(std::string newname);
		void guardGate();
		void attack(const std::string& target);
};

#endif