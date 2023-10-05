/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:23:25 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/05 19:37:36 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

//ORTHO
AMateria::AMateria()
{
	std::cout << "AMateria constructor called\n";
}

AMateria::AMateria(AMateria &copy) : type(copy.type) {
	std::cout << "AMateria copy constructor called\n";
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &newamateria) {
	std::cout << "Copy assignment operator called" << std::endl;
	type = newamateria.type;
	return (*this);
}

////////
AMateria::AMateria(std::string const &mytype) : type(mytype)
{
	// this->type = type;
}

std::string const& AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter &target)
{
	
}

// AMateria *AMateria::clone() const
// {
// 	return (new AMateria(*this));
// }

void AMateria::use(ICharacter& target){
	//
}

