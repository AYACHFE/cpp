/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:33:08 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/05 14:33:20 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	cout << "ZZZZzzz .. ." << endl;
}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat::Bureaucrat(Bureaucrat &copy) {
	name = copy.name;
	grade = copy.grade;
}


void Bureaucrat::setName(string newName) {
	name = newName;
}

string Bureaucrat::getName() {
	return (name);
}

int Bureaucrat::getGrade() {
	return (grade);
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
		std::cerr << except_h.what() << endl;
	}
	catch(GradeTooLowException& except_l)
	{
		std::cerr << except_l.what() << endl;
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &sec) {
	out << sec.getName() << ", bureaucrat grade " << sec.getGrade();
	return (out);
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("GRADE TO LOW");
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return ("GRADE TO HIGH");
}

void	Bureaucrat::increment_grade() {
	try {
		if ((grade + 1) > 150)
			throw (GradeTooHighException());
		else
			grade++;
	}
	catch(GradeTooHighException& except_h)
	{
		std::cerr << except_h.what() << endl;
	}
}

void	Bureaucrat::decrement_grade() {
	try {
		if ((grade - 1) <= 0)
			throw (GradeTooLowException());
		else
			grade--;
	}
	catch(GradeTooLowException& except_l)
	{
		std::cerr << except_l.what() << endl;
	}
}