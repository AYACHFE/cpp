/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:56:36 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/15 10:27:42 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

using std::string;
using std::cout;
using std::endl;

class Bureaucrat;

class AForm {
		const string name;
		const int grade;
		bool check;
		const int exec;
	public:
	//ORTHODOX
		AForm();
		AForm(const AForm &copy);
		virtual ~AForm();
		AForm &operator=(const AForm &newAform);
	//
		AForm(string newname, int newgrade, int newexec);
		string	getname() const;
		int		getgrade() const;
		bool	getcheck() const;
		int		getexec() const;
		void	setcheck(bool newcheck);
		void	beSigned(Bureaucrat &bur);
		class GradeTooLowException;
		class GradeTooHighException;

		virtual void execute(Bureaucrat const & executor) const = 0;
};

class AForm::GradeTooLowException :public std::exception {
	public:
		virtual const char* what() const throw();
};

class AForm::GradeTooHighException :public std::exception {
	public:
		virtual const char* what() const throw();
};

std::ostream &operator<<(std::ostream &out, AForm &sec);

#endif