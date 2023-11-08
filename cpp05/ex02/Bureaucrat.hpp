/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:25:16 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/08 16:43:50 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"
using	std::cout;
using	std::endl;
using	std::string;

class AForm;

class Bureaucrat {
		const string name;
		int grade;
	public:
	//ORTHODOX
		Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();
		Bureaucrat &operator=(Bureaucrat &newBureaucrat);
	//
		Bureaucrat(string newname, int newGrade);
		string	getName() const;
		int		getGrade() const;
		class GradeTooLowException;
		class GradeTooHighException;
		void	increment_grade();
		void	decrement_grade();
		void	signForm(AForm &form);
		void	executeForm(AForm const & form);
};

class Bureaucrat::GradeTooLowException :public std::exception {
	public:
		virtual const char* what() const throw();
};

class Bureaucrat::GradeTooHighException :public std::exception {
	public:
		virtual const char* what() const throw();
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &sec);

#endif