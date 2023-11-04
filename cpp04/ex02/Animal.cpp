/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:56:14 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/07 11:55:57 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::string Animal::getType() const
{
	return (type);
}

//orthodox

Animal::Animal() : type("NOTHING")
{
	std::cout << "Animal constructor called successfully" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called successfully" << std::endl;
}

Animal::Animal(std::string	mytype) : type(mytype)
{
	std::cout << "Animal constructor called successfully" << std::endl;
}

Animal::Animal(Animal &copy) {
	type = copy.type;
	std::cout << "Animal COPY constructor called successfully" << std::endl;
	
}

Animal &Animal::operator=(Animal &copy) {
	
	type = copy.type;
	return (*this);
}
//