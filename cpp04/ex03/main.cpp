/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:55:56 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/07 14:51:56 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main() {
	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;
	AMateria* tmpo[2];
	tmpo[0] = tmp = src->createMateria("ice");
	me->equip(tmpo[0]);
	tmpo[1] = tmp = src->createMateria("cure");
	me->equip(tmpo[1]);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete tmpo[0];
	delete tmpo[1];
	delete bob;
	delete me;
	delete src;
	return 0;
}
