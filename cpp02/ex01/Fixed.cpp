/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:58:11 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/29 14:02:12 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream &operator<<(std::ostream &cout, const Fixed &fixed) {
	cout << fixed.toFloat();
	return (cout);
}

Fixed::Fixed(const int const_int)
{
	fpoint = const_int << fbits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float float_p)
{
	fpoint = static_cast<int>(std::roundf(float_p * static_cast<float>(1 << fbits)));
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat() const
{
	float new_value = static_cast<float>(fpoint) / static_cast<float>(1 << fbits);
	return (new_value);
}

int Fixed::toInt() const
{
	int new_value = fpoint >> fbits;
	return (new_value);
}
//////////////

Fixed::Fixed() : fpoint(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) : fpoint(copy.fpoint)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	fpoint = other.fpoint;
	std::cout << "Copy assignment operator called" << std::endl;
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
