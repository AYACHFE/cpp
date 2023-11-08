/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:05:01 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/08 21:46:44 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	if (getcheck())
	{
		if (getexec() >= executor.getGrade() && getgrade() >= executor.getGrade())
		{
			cout << "The " << target << " has been robotomized \
successfully 50% of the time" << endl;
			return ;
		}
		else
			throw (1);
	}
}

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) {

}
RobotomyRequestForm::RobotomyRequestForm(string target) : AForm("RobotomyRequestForm", 72, 45) ,target(target){

}

RobotomyRequestForm::~RobotomyRequestForm() {
	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy) {
	target = copy.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &robot) {
	target = robot.target;
	return (*this);
}
