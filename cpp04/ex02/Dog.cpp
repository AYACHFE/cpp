/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:55:16 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/07 12:26:58 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void Dog::makeSound() const
{
	std::cout << "BARKING" << std::endl;
}

Dog::Dog() : Animal("Dog")
{
	brain = new Brain; 
	std::cout << "Dog constructor called successfully" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called successfully" << std::endl;
}

Dog::Dog(Dog &copy) : Animal("Dog")
{
	//shallow
	type = copy.type;
	//deep
	brain = new Brain();
	*brain = *copy.brain;
	std::cout << "Dog COPY constructor called successfully" << std::endl;
}

Dog	&Dog::operator=(Dog &newdog) {

	type = newdog.type;

	delete brain;
	brain = new Brain();
	*brain = *newdog.brain;
	return (*this);
}

////////