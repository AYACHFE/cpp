/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:23:06 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/05 14:26:43 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat *first = new Bureaucrat;
	first->setName("AYAC");
	first->setGrade(1);
	first->decrement_grade();
	cout << *first << endl;
	delete first;
}
