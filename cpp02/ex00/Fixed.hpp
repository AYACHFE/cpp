/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:58:17 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/23 11:23:08 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
		int	fpoint;
		static const int fbits = 8;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		~Fixed();
		Fixed	&operator=(const Fixed& other);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif