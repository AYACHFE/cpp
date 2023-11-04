/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:55:26 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/07 14:47:12 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void Cat::makeSound() const
{
	std::cout << "MEAOWW" << std::endl;
}

///orthodox
Cat::Cat() : Animal("Cat")
{
	brain = new Brain;
	std::cout << "Cat constructor called successfully" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called successfully" << std::endl;
}

Cat::Cat(Cat &copy) : Animal("Cat")
{
	//shallow
	type = copy.type;
	//deep
	brain = new Brain();
	*brain = *copy.brain;
	std::cout << "Cat COPY constructor called successfully" << std::endl;
}

Cat	&Cat::operator=(Cat &newcat) {

	type = newcat.type;

	delete brain;
	brain = new Brain();
	*brain = *newcat.brain;
	return (*this);
}

/////