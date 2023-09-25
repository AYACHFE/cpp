/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:58:17 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/25 12:35:30 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
		int	fpoint;
		static const int fbits = 8;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		// NEW
		Fixed(const int const_int);
		Fixed(const float number);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		// NEW_1
		Fixed&	min(Fixed &nb_1, Fixed &nb_2);
		const Fixed&	min(const Fixed &nb_1, const Fixed &nb_2);

		Fixed&	max(Fixed &nb_1, Fixed &nb_2);
		const Fixed&	max(const Fixed &nb_1, const Fixed &nb_2);
	
		// functions that overload for comparison
		bool operator>(const Fixed& nb) const;
		bool operator<(const Fixed& nb) const;
		bool operator>=(const Fixed& nb) const;
		bool operator<=(const Fixed& nb) const;
		bool operator==(const Fixed& nb) const;
		bool operator!=(const Fixed& nb) const;
	
		// functions that overload for arthmatic operators
		Fixed operator+(const Fixed& nb) const;
		Fixed operator-(const Fixed& nb) const;
		Fixed operator*(const Fixed& nb) const;
		Fixed operator/(const Fixed& nb) const;
	
		// functions that overload for incre/decre
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		
		/////
		~Fixed();
		Fixed&	operator=(const Fixed& other);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};
	
std::ostream &operator<<(std::ostream &cout, const Fixed &fixed);

#endif