/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:25:16 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/04 13:16:24 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

using	std::cout;
using	std::endl;
using	std::string;

class Bureaucrat {
		string name;
		int grade;
		static const bool check = false;
	public:
	//ORTHODOX
		Bureaucrat();
		Bureaucrat(Bureaucrat &copy);
		~Bureaucrat();
		Bureaucrat &operator=(Bureaucrat &newBureaucrat);
	//
		string getName();
		int		getGrade();
		void setName(string newName);
		void setGrade(int newGrade);
		class GradeTooLowException;
		class GradeTooHighException;
};

class Bureaucrat::GradeTooLowException :public std::exception {
	public:
		virtual const char* what() const _NOEXCEPT;
};

class Bureaucrat::GradeTooHighException :public std::exception {
	public:
		virtual const char* what() const _NOEXCEPT;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &sec);

#endif