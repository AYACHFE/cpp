/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:58:17 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/23 11:20:39 by aachfenn         ###   ########.fr       */
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
		/////
		~Fixed();
		Fixed&	operator=(const Fixed& other);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};
	
std::ostream &operator<<(std::ostream &cout, const Fixed &fixed);

#endif