/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 10:03:20 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/28 10:06:00 by aachfenn         ###   ########.fr       */
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
