/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:56:24 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/07 14:16:54 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : grade(1) , exec(1) {
	// cout << "FOrm :: ZZzz ,.,., . .." << endl;
}

Form::Form(string newname, int newgrade) : name(newname) , grade(newgrade), check(false) {
	// cout << "Form :: ZZzz ,.,., . .." << endl;
	(void)exec;
	if (newgrade <= 150 && newgrade > 0)
	{
		// grade = newgrade;
		cout << "GRADE GRANTED" << endl;
		return ;
	}
	if (newgrade > 150)
		throw (GradeTooLowException());
	else
		throw (GradeTooHighException());
}

Form::Form(const Form &copy) : name(copy.name) , grade(copy.grade) {
	
}

Form::~Form() {
	
}

Form &Form::operator=(const Form &newform) {
	check = newform.check;
	return *this;
}

std::ostream &operator<<(std::ostream &out, Form &sec) {
	out << "The FORM \"" << sec.getname() << "\" REQUIRED AUTHORITY TO BE SIGNED IS \"" << sec.getgrade() << "\"";
	return (out);
}

string	Form::getname() {
	return (name);
}

int		Form::getgrade() {
	return (grade);
}

bool	Form::getcheck() {
	return (check);
}

void	Form::beSigned(Bureaucrat &bur) {
	int gr = bur.getGrade();
	if (gr > grade)
		throw(Form::GradeTooLowException());
	check = true;
}

const char* Form::GradeTooLowException::what() const throw(){
	return ("GRADE TO LOW");
}

const char* Form::GradeTooHighException::what() const throw(){
	return ("GRADE TO HIGH");
}
