/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:56:14 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/28 09:18:26 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void Animal::makeSound() const
{
	std::cout << "NOTHING SOUND" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}

Animal::Animal() : type("NOTHING")
{
	std::cout << "Animal constructor called successfully" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called successfully" << std::endl;
}
