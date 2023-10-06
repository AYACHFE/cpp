/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:06:15 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/06 13:35:42 by aachfenn         ###   ########.fr       */
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
}

Character::Character(std::string name){
	// std::cout << "Character ConstRuctor called" << std::endl;
	// std::cout << name << "--\n";
	if (!name.empty()) {
		this->name = name;
		int i;
		for(i = 0; i < 4; i++)
			slot[i] = NULL;
	}
	else
		this->name = "N0name";
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
		// std::cout << "--->" << slot[i] << std::endl;
		if (slot[i] == NULL) {
			
			slot[i] = m;
		return ;
		}
		// std::cout << "i == " << i << std::endl;
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

	// std::cout<< slot[idx] << "\n";
	if (slot[idx] && idx >= 0 && idx < 4) {
		
		// std::cout << "DEBUG\n";
		slot[idx]->use(target);
	}
	else
		std::cout << "YOU CAN'T USE THIS" << std::endl;
}

// Character Character::operator=(Character &newCharacter) {
	
// 	return (*this);
// }