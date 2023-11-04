/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:33:08 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/04 13:36:45 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	cout << "ZZZZzzz .. ." << endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &copy) {
	name = copy.name;
	grade = copy.grade;
}


void Bureaucrat::setName(string newName) {
	name = newName;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &newBureaucrat) {
	name = newBureaucrat.name;
	grade = newBureaucrat.grade;
	return (*this);
}

void Bureaucrat::setGrade(int newGrade) {
	
	if (newGrade <= 150 && newGrade > 0)
	{
		grade = newGrade;
		cout << "GRADE GRANTED" << endl;
		return ;
	}
	
	try {
		if (newGrade > 150)
			throw (GradeTooHighException());
		else
			throw (GradeTooLowException());
	}
	catch(GradeTooHighException& except_h)
	{
		except_h.what();
	}
	catch(GradeTooLowException& except_l)
	{
		except_l.what();
	}
}

int Bureaucrat::getGrade() {
	return (grade);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &sec) {
	out << sec.getName() << ", bureaucrat grade " << sec.getGrade();
	return (out);
}


const char* Bureaucrat::GradeTooLowException::what() const {
	return ("GRADE TO LOW");
}

const char* Bureaucrat::GradeTooHighException::what() const {
	return ("GRADE TO HIGH");
}
