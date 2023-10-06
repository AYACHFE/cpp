/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:14:56 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/06 12:11:10 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"


class Cure : public AMateria {
		// std::string type;
		// const std::string type;
	public:
	//ORTHO
		Cure();
		Cure(const Cure &copy);
		~Cure();
		//operator=
	//
		Cure *clone() const;
		void use(ICharacter &target);
};

#endif