/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:55:13 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/07 11:43:48 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog: public Animal {
	public:
	//orhtodox
		Dog();
		Dog(Dog &copy);
		~Dog();
		Dog	&operator=(Dog &newdog);
	//
		void makeSound() const;
};


#endif