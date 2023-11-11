/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:56:13 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/09 17:47:48 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
AForm	*Intern::my_Shrubbery(string target) {
	cout << "Intern creates " << target << endl;
	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::my_Robot(string target) {
	cout << "Intern creates " << target << endl;
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::my_President(string target) {
	cout << "Intern creates " << target << endl;
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeForm(string name, string target) {

	typedef AForm *(Intern::*mp)(string);
	mp intern[3] = {
		&Intern::my_Shrubbery,
		&Intern::my_Robot,
		&Intern::my_President
	};
	// AForm *(Intern::*intern[3])(string) = {
	// 	&Intern::my_Shrubbery,
	// 	&Intern::my_Robot,
	// 	&Intern::my_President
	// };
	string tab[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i = 0;
	while (i < 3) {
		if (name == tab[i])
			return ((this->*intern[i])(target));
		i++;
	}
	cout << "Intern coudn't create " << target << endl;
	return (NULL);
}