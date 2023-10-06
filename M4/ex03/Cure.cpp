/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:15:49 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/06 13:19:22 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"

//OTHODOX
Cure::Cure(){
	// std::cout << "CURE construcor called\n";
	type = "cure";
}

Cure::Cure(const Cure &copy) {
	type = "cure";
	(void)	copy;
	// std::cout << "CURE copy construcor called\n";

}

Cure::~Cure(){
	// std::cout << "CURE destrucor called\n";
}
//

Cure *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
