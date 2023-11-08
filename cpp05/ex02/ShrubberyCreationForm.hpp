/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:04:39 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/08 19:50:57 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>

using std::string;
using std::cout;
using std::endl;

class ShrubberyCreationForm :public AForm {
		string target;
	public:
		//ORtHODOX
		ShrubberyCreationForm();
		ShrubberyCreationForm(string target);
		ShrubberyCreationForm(ShrubberyCreationForm &copy);
		~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(ShrubberyCreationForm &shru);
		//
		void execute(Bureaucrat const & executor) const;
};

#endif