/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:11:59 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/05 21:11:44 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// ORTHO STYLE
Ice::Ice() : type("ice") {
	std::cout << "ICE construcor called\n";
}

Ice::Ice(const Ice &copy) : type(copy.type) {
	std::cout << "ICE copy construcor called\n";
}

Ice::~Ice(){
	std::cout << "ICE destrucor called\n";
}

Ice &Ice::operator=(const Ice &newice) {
	std::cout << "Copy assignment operator called" << std::endl;
	type = newice.type;
	return (*this);
}

////////

void Ice::use(ICharacter &target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice *Ice::clone() const
{
	return (new Ice(*this));
}
