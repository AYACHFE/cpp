/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:28:33 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/07 12:58:56 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	protected:
		AMateria *storage[4];
	public:
	//ORTHODOX
		MateriaSource();
		MateriaSource(MateriaSource &copy);
		~MateriaSource();
		MateriaSource &operator=(MateriaSource &newMateria);
	//
		void learnMateria(AMateria *materia);
		AMateria* createMateria(std::string const & type);
};


#endif