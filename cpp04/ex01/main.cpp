/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:28:49 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/07 14:47:27 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal *tab[6];
	
	for (int i = 0; i < 3 ; i++) {
		tab[i] = new Dog();
	}
	for (int i = 3; i < 6 ; i++) {
		tab[i] = new Cat();
	}
	std::cout << std::endl;
	for (int i = 0 ; i < 6 ; i++) {
		delete tab[i];
	}
	delete i;
	delete j;
	return 0;
}