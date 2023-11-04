/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:14:56 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/07 13:06:59 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"


class Cure : public AMateria {
	public:
	//ORTHO
		Cure();
		Cure(const Cure &copy);
		~Cure();
		Cure &operator=(const Cure &newCure);

	//
		Cure *clone() const;
		void use(ICharacter &target);
};

#endif