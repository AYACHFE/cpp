/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:28:49 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/28 10:35:47 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	meta->makeSound();
	j->makeSound();
	
	std::cout << std::endl;
	const WrongAnimal* wa = new WrongAnimal();
	const WrongAnimal* wc = new WrongCat();
	std::cout << wc->getType() << " " << std::endl;
	std::cout << wa->getType() << " " << std::endl;
	wa->makeSound();
	wc->makeSound();
	std::cout << std::endl;
	
	
	delete meta;
	delete i;
	delete j;
	delete wa;
	delete wc;

	return 0;
}