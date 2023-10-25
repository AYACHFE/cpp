/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:33:08 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/24 16:47:43 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	
}

Bureaucrat::Bureaucrat(Bureaucrat &copy) {
	
}


void Bureaucrat::setName(string newName) {
	name = newName;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &newBureaucrat) {
	name = newBureaucrat.name;
	grade = newBureaucrat.grade;
	return (*this);
}
