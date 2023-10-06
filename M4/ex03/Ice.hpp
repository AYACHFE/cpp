/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:12:04 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/06 12:11:23 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice : public AMateria {
		// const std::string type;
		// std::string type;
	public:
	//ORTHO
		Ice();
		Ice(const Ice &copy);
		~Ice();
		Ice &operator=(const Ice &newice);
	//
		AMateria* clone() const;
		void use(ICharacter &target);
};

#endif