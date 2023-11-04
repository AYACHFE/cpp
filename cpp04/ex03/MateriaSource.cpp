/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:29:32 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/04 10:35:29 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

//ORTHODOX
MateriaSource::MateriaSource() {
	
	// std::cout << "MateriaSource Default ConstRuctor called" << std::endl;
	int i;
	for(i = 0; i < 4; i++)
		storage[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource &copy) {
	*this = copy;
}

MateriaSource::~MateriaSource() {
	// std::cout << "IMAteRIASouRCe destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (storage[i] != NULL) {
			delete storage[i];
		}
	}
}

//

void MateriaSource::learnMateria(AMateria *materia) {
	for (int i = 0; i < 4; i++)
	{
		if (storage[i] == NULL) {
			storage[i] = materia;
			return ;
		}
	}
	std::cout << "YOU REACHED THE MAX" << std::endl;

}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (storage[i] != NULL && storage[i]->getType() == type)
		{
			return (storage[i]->clone());
		}
	}
	std::cout << "UNKNOWN TYPE \"" << type << "\"" << std::endl;
	return (NULL);
}

MateriaSource &MateriaSource::operator=(MateriaSource __unused &newMateria) {
	
	int i = 0;
	while (storage[i])
	{
		delete storage[i];
		if (storage[i] != NULL)
			storage[i] = storage[i]->clone();
		i++;
	}
	return (*this);
}
