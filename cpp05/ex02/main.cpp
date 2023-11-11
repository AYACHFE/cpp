/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:23:06 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/09 13:10:00 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try {
		Bureaucrat first("AYAC", 136);
		AForm *form = new ShrubberyCreationForm("home");
		
		form->beSigned(first);
		first.executeForm(*form);
		cout << endl;
		Bureaucrat akhnouch("ONE", 30);
		AForm *cin = new RobotomyRequestForm("THE_ONE");
		
		cin->beSigned(akhnouch);
		cin->execute(akhnouch);
		cout << endl;
		Bureaucrat Zaphod("FR", 4);
		AForm *pass = new PresidentialPardonForm("cheng");
		
		pass->beSigned(Zaphod);
		pass->execute(Zaphod);
		//Stack Unwinding
	}
	catch(std::exception& except) {
		std::cerr << except.what() << endl;
	}
	catch(...) {
		std::cerr << "Unknown exception" << endl;
	}
}
