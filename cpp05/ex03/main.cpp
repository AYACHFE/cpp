/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:23:06 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/09 10:05:46 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	try {
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");


		// Bureaucrat first("AYAC", 136);
		// Form *form = new ShrubberyCreationForm("home");
		
		// form->beSigned(first);
		// // form->execute(first);
		// first.executeForm(*form);
		// // cout << first << endl;
		// // cout << *form << endl;
		// cout << endl;
		// Bureaucrat akhnouch("ONE", 30);
		// Form *cin = new RobotomyRequestForm("THE_ONE");
		
		// cin->beSigned(akhnouch);
		// cin->execute(akhnouch);
		// cout << endl;
		// Bureaucrat Zaphod("FR", 4);
		// Form *pass = new PresidentialPardonForm("cheng");
		
		// pass->beSigned(Zaphod);
		// pass->execute(Zaphod);
		// //Stack Unwinding
	}
	catch(std::exception& except) {
		std::cerr << except.what() << endl;
	}
	catch(...) {
		std::cerr << "Unknown exception" << endl;
	}
}
