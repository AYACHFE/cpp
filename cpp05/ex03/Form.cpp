/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:56:24 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/08 21:14:10 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : grade(1), check(false), exec(1) {

}

Form::Form(string newname, int newgrade, int newexec) : name(newname) , grade(newgrade), check(false), exec(newexec) {

	if (newgrade <= 150 && newgrade > 0)
	{
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

Form &Form::operator=(const Form &newForm) {
	check = newForm.check;
	return *this;
}

std::ostream &operator<<(std::ostream &out, Form &sec) {
	out << "The Form \"" << sec.getname() << "\" REQUIRED AUTHORITY TO BE SIGNED IS \"" << sec.getgrade() << "\"";
	return (out);
}

string	Form::getname() const {
	return (name);
}

int		Form::getgrade() const{
	return (grade);
}

bool	Form::getcheck() const{
	return (check);
}

int		Form::getexec() const{
	return (exec);
}

void	Form::setcheck(bool newcheck) {
	check = newcheck;
}

void	Form::setexec(int newexec) {
	exec = newexec;
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

void Form::execute(Bureaucrat const & executor) const {
	(void)executor;
}
