/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 10:11:22 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/07 12:12:36 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

void WrongCat::makeSound() const
{
	std::cout << "MEAOWWWWWWWWWWWWW" << std::endl;
}

WrongCat::WrongCat() : WrongAnimal("WRONG CAT")
{
	std::cout << "WrongCat constructor called successfully" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called successfully" << std::endl;
}


//
WrongCat::WrongCat(WrongCat &copy) : WrongAnimal("WrongCat")
{
	//shallow
	type = copy.type;
	std::cout << "WrongCat COPY constructor called successfully" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat &newWrongcat) {

	std::cout << "WrongCat ASSIGNMENT operator called successfully" << std::endl;
	type = newWrongcat.type;
	return (*this);
}
