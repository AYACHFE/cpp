/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:56:24 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/07 15:35:03 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : grade(0) {

}

AForm::AForm(string newname, int newgrade) : name(newname) , grade(newgrade), check(false) {

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

AForm::AForm(const AForm &copy) : name(copy.name) , grade(copy.grade) {
	
}

AForm::~AForm() {
	
}

AForm &AForm::operator=(const AForm &newAform) {
	check = newAform.check;
	return *this;
}

std::ostream &operator<<(std::ostream &out, AForm &sec) {
	out << "The AFORM \"" << sec.getname() << "\" REQUIRED AUTHORITY TO BE SIGNED IS \"" << sec.getgrade() << "\"";
	return (out);
}

string	AForm::getname() {
	return (name);
}

int		AForm::getgrade() {
	return (grade);
}

bool	AForm::getcheck() {
	return (check);
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
