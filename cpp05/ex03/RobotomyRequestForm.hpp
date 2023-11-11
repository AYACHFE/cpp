/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:05:14 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/08 21:45:45 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
using std::string;
using std::cout;
using std::endl; 

class RobotomyRequestForm :public AForm  {
		string target;
	public:
	//ORTHODOX
		RobotomyRequestForm();
		RobotomyRequestForm(string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm &copy);
		RobotomyRequestForm &operator=(RobotomyRequestForm &robot);
	//
		void execute(Bureaucrat const & executor) const;
};

#endif