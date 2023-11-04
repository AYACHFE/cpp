/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 10:09:48 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/07 12:17:09 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat:public WrongAnimal{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat &copy);
		WrongCat &operator=(WrongCat &newWrongcat);
		void makeSound() const;
};



#endif