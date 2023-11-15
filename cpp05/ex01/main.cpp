/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:23:06 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/15 11:02:11 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat first("AYAC", 150);
		Form form("CIN", 2, 1);
		// form.beSigned(first);
		first.signForm(form);
		first.increment_grade();
		
		cout << first << endl;
		cout << form << endl;
	}
	catch(std::exception& except) {
		std::cerr << except.what() << endl;
	}
}
