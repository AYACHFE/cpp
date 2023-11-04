/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 10:38:03 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/07 14:45:18 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "THE BRAIN IS CREATED" << std::endl;
}

Brain::~Brain()
{
	std::cout << "THE BRAIN IS DESTROYED" << std::endl;
}

Brain::Brain(Brain &copy) {

	for (int i = 0; i < 100; i++) {
		ideas[i] = copy.ideas[i];
	}
}

Brain &Brain::operator=(Brain &newbrain) {
	
	for (int i = 0; i < 100; i++) {
		ideas[i] = newbrain.ideas[i];
	}
	return (*this);
}