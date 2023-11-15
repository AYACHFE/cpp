/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:23:06 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/15 11:06:40 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	AForm *form = NULL;
	AForm *cin = NULL;
	AForm *pass = NULL;
	try {
		Bureaucrat first("AYAC", 136);
		form = new ShrubberyCreationForm("home");
		
		form->beSigned(first);
		first.executeForm(*form);
		cout << endl;
		Bureaucrat akhnouch("ONE", 45);
		AForm *cin = new RobotomyRequestForm("THE_ONE");
		
		cin->beSigned(akhnouch);
		cin->execute(akhnouch);
		cout << endl;
		Bureaucrat Zaphod("FR", 4);
		pass = new PresidentialPardonForm("cheng");
		
		pass->beSigned(Zaphod);
		pass->execute(Zaphod);
		
	}
	catch(std::exception& except) {
		std::cerr << except.what() << endl;
	}
	catch(...) {
		std::cerr << "The robotomy failed" << endl;
	}
	if (form)
		delete form;
	if (cin)
		delete cin;
	if (pass)
		delete pass;
}
