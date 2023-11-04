/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:06:15 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/07 15:07:25 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.hpp"

Character::Character(){
	// std::cout << "Character Default ConstRuctor called" << std::endl;
	int i;
	for(i = 0; i < 4; i++)
		slot[i] = NULL;
}

Character::~Character() {
	// std::cout << "CHArACter destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (slot[i] && slot[i] == NULL) {
			delete slot[i];
		}
	}
}

Character::Character(std::string name) {
		
		this->name = name;
		for(int i = 0; i < 4; i++)
			slot[i] = NULL;
}

Character::Character(Character &copy) {
	*this = copy;
}

std::string const &Character::getName() const {
	return (name);
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++)
	{
		if (slot[i] == NULL) {
			slot[i] = m;
		return ;
		}
	}
	std::cout << "YOU REACHED THE MAX" << std::endl;
}

void Character::unequip(int idx) {
	if (slot[idx] || idx > 0 || idx <= 4)
		std::cout << "YOU CAN'T UNEQUIP THIS MATERIA" << std::endl;
	else
		slot[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {

	if (slot[idx] && idx >= 0 && idx < 4) {
		
		slot[idx]->use(target);
	}
	else
		std::cout << "YOU CAN'T USE THIS" << std::endl;
}

Character &Character::operator=(Character &newCharacter) {
	
	name = newCharacter.name;
	int i = 0;
	while (slot[i])
	{
		delete slot[i];
		if (slot[i] != NULL)
			slot[i] = slot[i]->clone();
		i++;
	}

	return (*this);
}
