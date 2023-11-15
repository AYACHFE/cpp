/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:56:24 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/15 11:02:48 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : grade(150), check(false), exec(150) {

}

AForm::AForm(string newname, int newgrade, int newexec) : name(newname) , grade(newgrade), check(false), exec(newexec) {

	if ((newgrade <= 150 && newgrade > 0) && (newexec <= 150 && newexec > 0))
		return ;
	if (newgrade > 150)
		throw (GradeTooLowException());
	else
		throw (GradeTooHighException());
}

AForm::AForm(const AForm &copy) : name(copy.name) , grade(copy.grade) , exec(copy.exec){
	
}

AForm::~AForm() {
	
}

AForm &AForm::operator=(const AForm &newAform) {
	check = newAform.check;
	return *this;
}

std::ostream &operator<<(std::ostream &out, AForm &sec) {
	out << "The FORM \"" << sec.getname() << "\" REQUIRED AUTHORITY TO BE SIGNED IS \"" <<\
	 sec.getgrade()  << "\""<< " AND TO BE EXECUTED \"" << sec.getexec();
	return (out);
}

string	AForm::getname() const {
	return (name);
}

int		AForm::getgrade() const{
	return (grade);
}

bool	AForm::getcheck() const{
	return (check);
}

int		AForm::getexec() const{
	return (exec);
}

void	AForm::setcheck(bool newcheck) {
	check = newcheck;
}

void	AForm::beSigned(Bureaucrat &bur) {
	int gr = bur.getGrade();
	if (gr > grade)
		throw(AForm::GradeTooLowException());
	check = true;
}

const char* AForm::GradeTooLowException::what() const throw(){
	return ("GRADE TO LOW");
}

const char* AForm::GradeTooHighException::what() const throw(){
	return ("GRADE TO HIGH");
}
