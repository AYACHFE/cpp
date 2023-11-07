/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:33:08 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/07 11:50:59 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	// cout << "ZZZZzzz .. ." << endl;
}

Bureaucrat::Bureaucrat(string newname, int newGrade)  :  name(newname)  {
	// cout << "ZZZZzzz .. ..." << endl;
	if (newGrade <= 150 && newGrade > 0)
	{
		grade = newGrade;
		cout << "GRADE GRANTED" << endl;
		return ;
	}
	if (newGrade > 150)
		throw (GradeTooLowException());
	else
		throw (GradeTooHighException());
}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)  : name(copy.name) , grade(copy.grade) {

}


string Bureaucrat::getName() {
	return (name);
}

int Bureaucrat::getGrade() {
	return (grade);
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &newBureaucrat) {
	grade = newBureaucrat.grade;
	return (*this);
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
	if ((grade + 1) > 150)
		throw (GradeTooLowException());
	else
		grade++;
}

void	Bureaucrat::decrement_grade() {
	if ((grade - 1) <= 0)
		throw (GradeTooHighException());
	else
		grade--;
}

void	Bureaucrat::signForm(Form &form) {
	try
	{
		// form.beSigned(*this);
		if (form.getcheck() == false)
			throw(1);
		cout << name << " signed " << form.getname() << endl;
	}
	catch (...)
	{	
			cout << name << " couldn’t sign " << form.getname() <<  " because " << form.getcheck() << endl;
	}
}
