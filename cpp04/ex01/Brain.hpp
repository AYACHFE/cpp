/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:33:28 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/07 11:46:45 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
		std::string ideas[100];
	public:
		Brain();
		Brain(Brain &copy);
		Brain &operator=(Brain &newbrain);
		~Brain();
		
};

#endif