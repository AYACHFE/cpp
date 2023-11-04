/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:55:33 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/07 11:55:06 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat:public Animal{
		Brain *brain;
	public:
		//orthodox
		Cat();
		Cat(Cat &copy);
		~Cat();
		Cat	&operator=(Cat &newcat);
	//
		void makeSound() const;
};


#endif