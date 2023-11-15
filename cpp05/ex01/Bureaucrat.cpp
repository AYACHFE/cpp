/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:33:08 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/15 11:01:48 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : grade(150) {

}

Bureaucrat::Bureaucrat(string newname, int newGrade)  :  name(newname) {

	if (newGrade <= 150 && newGrade > 0)
	{
		grade = newGrade;
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
	if ((grade - 1) <= 0)
		throw (GradeTooHighException());
	else
		grade--;
}

void	Bureaucrat::decrement_grade() {
	if ((grade + 1) > 150)
		throw (GradeTooLowException());
	else
		grade++;
}

void	Bureaucrat::signForm(Form &form) {
	try
	{
		form.beSigned(*this);
		cout << name << " signed " << form.getname() << endl;
	}
	catch (std::exception &e)
	{	
		cout << name << " couldn’t sign " << form.getname() <<  " because " << e.what() << endl;
	}
}
