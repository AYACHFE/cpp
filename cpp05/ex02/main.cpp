/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:23:06 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/08 17:10:25 by aachfenn         ###   ########.fr       */
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
		// form->execute(first);
		first.executeForm(*form);
		cout << first << endl;
		cout << *form << endl;
	}
	catch(std::exception& except) {
		std::cerr << except.what() << endl;
	}
	catch(...) {
		std::cerr << "Unknown exception" << endl;
	}
}
