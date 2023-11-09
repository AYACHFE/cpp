/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:05:34 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/09 09:41:26 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("RobotomyRequestForm", 25, 5) {
	// setexec(5);
}

PresidentialPardonForm::~PresidentialPardonForm() {
	
}

PresidentialPardonForm::PresidentialPardonForm(string target) : Form("RobotomyRequestForm", 25, 5) ,target(target) {
	// setexec(5);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (getcheck())
	{
		if (getexec() >= executor.getGrade() && getgrade() >= executor.getGrade())
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