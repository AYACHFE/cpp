/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:56:36 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/08 21:07:08 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
#define Form_HPP

#include <iostream>
#include "Bureaucrat.hpp"

using std::string;
using std::cout;
using std::endl;

class Bureaucrat;

class Form {
		const string name;
		const int grade;
		bool check;
		int exec;
	public:
	//ORTHODOX
		Form();
		Form(const Form &copy);
		~Form();
		Form &operator=(const Form &newForm);
	//
		Form(string newname, int newgrade, int newexec);
		string	getname() const;
		int		getgrade() const;
		bool	getcheck() const;
		int		getexec() const;
		void	setcheck(bool newcheck);
		void	setexec(int newexec);
		void	beSigned(Bureaucrat &bur);
		class GradeTooLowException;
		class GradeTooHighException;

		virtual void execute(Bureaucrat const & executor) const;
};

class Form::GradeTooLowException :public std::exception {
	public:
		virtual const char* what() const throw();
};

class Form::GradeTooHighException :public std::exception {
	public:
		virtual const char* what() const throw();
};

std::ostream &operator<<(std::ostream &out, Form &sec);

#endif