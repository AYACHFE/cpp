/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:23:31 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/05 10:23:46 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include<iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		// const std::string type;
		std::string type;
	public:
	// ORTHO
		AMateria();
		AMateria(AMateria &copy);
		virtual ~AMateria();
		AMateria &operator=(const AMateria &newamateria);
	//
		AMateria(std::string const &type);
		std::string const &getType() const;
		// std::string &getname();
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif