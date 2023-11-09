/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:56:13 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/09 10:06:25 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form	*Intern::makeForm(string name, string target) {
	try {
		// cout << "name = " << name << " getname = "<< getName() << endl;
		if (name != getName())
			throw(1);
		cout << "Intern creates " << target << endl;
	}
	catch(...) {
		std::cerr << "intern FAILED to find the form" << endl;
	}
	return (new Form(target, 1, 1));
}