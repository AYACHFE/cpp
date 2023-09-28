/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:23:31 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/28 13:45:13 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include<iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		const std::string type;
	public:
		AMateria(std::string const &type);
		AMateria();

		std::string const &getType() const;
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif