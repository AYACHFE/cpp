/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:23:25 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/06 12:31:18 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

//ORTHO
AMateria::AMateria()
{
	// int i;
	// for(i = 0; i < 4 ; i++)
		type = "undefinedAMateria";
	// std::cout << "AMateria constructor called\n";
}

AMateria::AMateria(AMateria &copy) : type(copy.type) {
	// std::cout << "AMateria copy constructor called\n";
}

AMateria::~AMateria()
{
	// std::cout << "AMateria destructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &newamateria) {
	// std::cout << "Copy assignment operator called" << std::endl;
	type = newamateria.type;
	return (*this);
}

////////
AMateria::AMateria(std::string const &mytype) : type(mytype)
{
	// std::cout << "AMateria name constructor called"<< std::endl;
	// this->type = type;
}

std::string const& AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}
