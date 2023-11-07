/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:04:39 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/07 14:08:04 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class ShrubberyCreationForm :public Form {
	public:
		//ORtHODOX
		ShrubberyCreationForm();
		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm &copy);
		~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(ShrubberyCreationForm &shru);
		//
		void execute(Bureaucrat const & executor);
};

#endif