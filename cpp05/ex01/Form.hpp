/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:56:36 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/15 09:27:15 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

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
		const int exec;
	public:
	//ORTHODOX
		Form();
		Form(const Form &copy);
		~Form();
		Form &operator=(const Form &newform);
	//
		Form(string newname, int newgrade, int newexec);
		string	getname();
		int		getgrade();
		int		getexec();
		bool	getcheck();
		void	beSigned(Bureaucrat &bur);
		class GradeTooLowException;
		class GradeTooHighException;
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