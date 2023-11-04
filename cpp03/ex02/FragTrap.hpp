/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:51:30 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/05 10:40:06 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
	// ORTHO
		FragTrap();
		FragTrap(FragTrap &copy);
		~FragTrap();
		FragTrap &operator=(const FragTrap& newclap);
	//
		FragTrap(std::string newname);
		void attack(const std::string& target);
		void highFivesGuys(void);
};

#endif