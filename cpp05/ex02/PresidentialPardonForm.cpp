/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:05:34 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/08 16:40:16 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {
	
}

PresidentialPardonForm::~PresidentialPardonForm() {
	
}

PresidentialPardonForm::PresidentialPardonForm(string target) : target(target) {
	
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	(void)executor;
}
