/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:55:26 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/28 10:11:40 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

std::string Cat::getType() const
{
	return (type);
}

void Cat::makeSound() const
{
	std::cout << "MEAOWW" << std::endl;
}

Cat::Cat() : type("Cat")
{
	std::cout << "Cat constructor called successfully" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called successfully" << std::endl;
}
