/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:23:06 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/07 14:19:24 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat first("AYAC", 15);
		Form form("CIN", 2);
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
