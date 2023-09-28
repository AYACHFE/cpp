/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:55:16 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/28 12:41:28 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

std::string Dog::getType() const
{
	return (type);
}


void Dog::makeSound() const
{
	std::cout << "BARKING" << std::endl;
}

Dog::Dog() : type("Dog")
{
	brain = new Brain; 
	std::cout << "Dog constructor called successfully" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called successfully" << std::endl;
}
