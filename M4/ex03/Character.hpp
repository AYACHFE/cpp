/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:05:55 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/05 20:16:42 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
	protected:
		std::string name;
		AMateria *slot[4];
	public:
	//ORTHO
		Character();
		Character(Character &copy);
		~Character();
		//operator=//
	//
		void equip(AMateria* m);
		void unequip(int idx);
		Character(std::string name);
		void use(int idx, ICharacter& target);
		std::string const & getName() const;
};

#endif