/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 10:03:35 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/07 12:18:00 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
		std::string type;
	public:
	//orthodox
		WrongAnimal();
		WrongAnimal(WrongAnimal &copy);
		~WrongAnimal();
		WrongAnimal &operator=(WrongAnimal &copy);
	//
		WrongAnimal(std::string mytype);
		void makeSound() const;
		std::string getType() const;
};


#endif