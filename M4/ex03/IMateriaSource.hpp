/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:18:41 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/02 12:48:14 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"
#include<iostream>

class IMateriaSource
{
	public:
		IMateriaSource();
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria *materia) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif