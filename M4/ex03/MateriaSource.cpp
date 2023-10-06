/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:29:32 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/06 15:07:37 by aachfenn         ###   ########.fr       */
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
}

//

void MateriaSource::learnMateria(AMateria *materia) {
	for (int i = 0; i < 4; i++)
	{
		if (storage[i] == NULL){
			storage[i] = materia;
			// std::cout << storage[i] << "\n";
			return ;
		}
	}
	std::cout << "YOU REACHED THE MAX" << std::endl;

}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		// if(storage[i])
		// 	std::cout <<i <<" "<< storage[i]->getType() << "\n";
		if (storage[i] != NULL && storage[i]->getType() == type)
		{
			return (storage[i]->clone());
		}
	}
	std::cout << "UNKNOWN TYPE \"" << type << "\"" << std::endl;
	return (NULL);
}
