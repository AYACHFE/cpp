/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:56:24 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/15 09:57:31 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : grade(150) , exec(150) {

}

Form::Form(string newname, int newgrade, int newexec) : name(newname) , grade(newgrade), check(false), exec(newexec) {

	if ((newgrade <= 150 && newgrade > 0) && (newexec <= 150 && newexec > 0))
		return ;
	if (newgrade > 150)
		throw (GradeTooLowException());
	else
		throw (GradeTooHighException());
}

Form::Form(const Form &copy) : name(copy.name) , grade(copy.grade), exec(copy.exec) {
	
}

Form::~Form() {
	
}

Form &Form::operator=(const Form &newform) {
	check = newform.check;
	return *this;
}

std::ostream &operator<<(std::ostream &out, Form &sec) {
	out << "The FORM \"" << sec.getname() << "\" REQUIRED AUTHORITY TO BE SIGNED IS \"" <<\
	 sec.getgrade()  << "\""<< " AND TO BE EXECUTED \"" << sec.getexec();
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

int		Form::getexec() {
	return (exec);
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
