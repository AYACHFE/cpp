/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 10:03:20 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/07 12:15:31 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void WrongAnimal::makeSound() const
{
	std::cout << "WRONG ANIMAL SOUND" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}

WrongAnimal::WrongAnimal() : type("WRONG ANIMAL")
{
	std::cout << "WrongAnimal constructor called successfully" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called successfully" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &copy) {
	type = copy.type;
	std::cout << "WrongAnimal COPY constructor called successfully" << std::endl;
	
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &copy) {
	
	std::cout << "WrongAnimal assignment operator called successfully" << std::endl;
	type = copy.type;
	return (*this);
}

WrongAnimal::WrongAnimal(std::string mytype) : type(mytype)
{
	std::cout << "WrongAnimal constructor called successfully" << std::endl;
}
