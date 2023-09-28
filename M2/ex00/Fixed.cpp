/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:58:11 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/28 13:47:33 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fpoint(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) : fpoint(copy.fpoint)
{
	std::cout << "Copy constructor called" << std::endl;
	getRawBits();
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this == &other)
	{
	    return *this;
	}
	fpoint = other.fpoint;
	std::cout << "Copy assignment operator called" << std::endl;
	getRawBits();
	return (*this);
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fpoint);
}

void	Fixed::setRawBits( int const raw )
{
	fpoint = raw;
}
