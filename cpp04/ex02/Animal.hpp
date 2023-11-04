/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:56:12 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/07 14:48:31 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string type;
	public:
	//orthodox
		Animal();
		virtual ~Animal();
		Animal(Animal &copy);
		Animal &operator=(Animal &copy);
		//
		Animal(std::string	mytype);
		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif