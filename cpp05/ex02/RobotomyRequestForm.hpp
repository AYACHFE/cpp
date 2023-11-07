/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:05:14 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/07 14:07:58 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class RobotomyRequestForm :public Form  {
	public:
	//ORTHODOX
		RobotomyRequestForm();
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm &copy);
		RobotomyRequestForm &operator=(RobotomyRequestForm &robot);
	//
		void execute(Bureaucrat const & executor);
};

#endif