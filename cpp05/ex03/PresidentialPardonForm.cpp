/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:05:34 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/15 11:10:18 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("RobotomyRequestForm", 25, 5) {

}

PresidentialPardonForm::~PresidentialPardonForm() {
	
}

PresidentialPardonForm::PresidentialPardonForm(string target) : AForm("RobotomyRequestForm", 25, 5) ,target(target) {

}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (getcheck())
	{
		if (getexec() >= executor.getGrade())
		{
			cout << "that " << target << " has been pardoned by Zaphod Beeblebrox." << endl;
			return ;
		}
		else
			throw (1);
	}
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy) {
	target = copy.target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &presi) {
	target = presi.target;
	return (*this);
}