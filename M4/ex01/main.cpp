/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:28:49 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/28 12:41:49 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal *tab[10];
	
	for (int i = 0; i < 5 ; i++){
		tab[i] = new Dog();
	}
	for (int i = 5; i < 10 ; i++){
		tab[i] = new Cat();
	}
	std::cout << std::endl;
	for (int i = 0 ; i < 10 ; i++){
		delete tab[i];
	}
	delete i;
	delete j;
	return 0;
}