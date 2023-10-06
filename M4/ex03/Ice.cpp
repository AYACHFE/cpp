/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:11:59 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/06 12:30:57 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// ORTHO STYLE
Ice::Ice() {
	// std::cout << "ICE construcor called\n";
	type = "ice";
	// std::cout << type << std::endl;
}

Ice::Ice(const Ice &copy){
	type = "ice";
	(void)copy;
	// std::cout << "ICE copy construcor called\n";
}

Ice::~Ice(){
	// std::cout << "ICE destrucor called\n";
}

Ice &Ice::operator=(const Ice &newice) {
	// std::cout << "Copy assignment operator called" << std::endl;
	type = newice.type;
	return (*this);
}

////////

void Ice::use(ICharacter &target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}
