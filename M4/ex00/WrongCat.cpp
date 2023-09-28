/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 10:11:22 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/28 10:28:51 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

std::string WrongCat::getType() const
{
	return (type);
}

void WrongCat::makeSound() const
{
	std::cout << "MEAOWWWWWWWWWWWWW" << std::endl;
}

WrongCat::WrongCat() : type("WRONG CAT")
{
	std::cout << "WrongCat constructor called successfully" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called successfully" << std::endl;
}
