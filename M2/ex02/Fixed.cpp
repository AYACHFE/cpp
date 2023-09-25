/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:58:11 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/25 12:35:21 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

////////
Fixed&	Fixed::min(Fixed &nb_1, Fixed &nb_2){
	if (nb_1.fpoint > nb_2.fpoint)
		return (nb_2);
	else
		return (nb_1);
}

const Fixed&	Fixed::min(const Fixed &nb_1, const Fixed &nb_2){
	if (nb_1.fpoint > nb_2.fpoint)
		return (nb_2);
	else
		return (nb_1);
}

Fixed&	Fixed::max(Fixed &nb_1, Fixed &nb_2){
	if (nb_1.fpoint < nb_2.fpoint)
		return (nb_2);
	else
		return (nb_1);
}

const Fixed&	Fixed::max(const Fixed &nb_1, const Fixed &nb_2){
	if (nb_1.fpoint < nb_2.fpoint)
		return (nb_2);
	else
		return (nb_1);
}

// functions that overload for arthmatic operators
Fixed Fixed::operator+(const Fixed& nb) const {
	return Fixed(fpoint + nb.fpoint);
}

Fixed Fixed::operator-(const Fixed& nb) const {
	return Fixed(fpoint - nb.fpoint);
}

Fixed Fixed::operator*(const Fixed& nb) const {
	return Fixed((fpoint * nb.fpoint) >> fbits);
	// The ">> fbits" is used to scale the result back down to fixed-point representation
}

Fixed Fixed::operator/(const Fixed& nb) const {
	if (nb.fpoint != 0) {
		return Fixed((fpoint << fbits) / nb.fpoint);
		// The "<< fbits" is used to scale the dividend before division
	} else {
		// Handle division by zero gracefully
		// Here, we return a Fixed object with a value of 0 to indicate an error
		return Fixed(0);
	}
}


// functions that overload for comparison
bool Fixed::operator>(const Fixed& nb) const {
	return (fpoint > nb.fpoint);
}

bool Fixed::operator<(const Fixed& nb) const {
	return (fpoint < nb.fpoint);
}

bool Fixed::operator>=(const Fixed& nb) const {
	return (fpoint >= nb.fpoint);
}

bool Fixed::operator<=(const Fixed& nb) const {
	return (fpoint <= nb.fpoint);
}

bool Fixed::operator==(const Fixed& nb) const {
	return (fpoint == nb.fpoint);
}

bool Fixed::operator!=(const Fixed& nb) const {
	return (fpoint != nb.fpoint);
}

// functions that overload for incre/decre
Fixed& Fixed::operator++() { // Pre-increment
	++this->fpoint;
	return *this;
}

Fixed Fixed::operator++(int) { // Post-increment
	Fixed tmp(*this);
	++(*this);
	return tmp;
}

Fixed& Fixed::operator--() { // Pre-decrement
	--this->fpoint;
	return *this;
}

Fixed Fixed::operator--(int) { // Post-decrement
	Fixed tmp(*this);
	--(*this);
	return tmp;
}

///////////

std::ostream &operator<<(std::ostream &cout, const Fixed &fixed) {
	cout << fixed.toFloat();
	return (cout);
}

///////////////

Fixed::Fixed(const int const_int)
{
	fpoint = const_int << fbits;
}

Fixed::Fixed(const float float_p)
{
	fpoint = static_cast<int>(std::roundf(float_p * static_cast<float>(1 << fbits)));
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
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) : fpoint(copy.fpoint)
{
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	// if (this == &other)
	// {
	//     return *this;
	// }
	fpoint = other.fpoint;
	// std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

int		Fixed::getRawBits( void ) const
{
	return (fpoint);
}

void	Fixed::setRawBits( int const raw )
{
	fpoint = raw;
}
