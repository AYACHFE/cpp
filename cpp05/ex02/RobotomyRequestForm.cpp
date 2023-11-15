/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:05:01 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/15 11:08:25 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	srand(time(NULL));
  	int randomNumber = rand();

	if (getcheck())
	{
		cout << "DRILLING NOISE" << endl;
		if ((randomNumber % 2 == 1) && getexec() >= executor.getGrade())
		{
			cout << "The " << target << " has been robotomized successfully 50% of the time" << endl;
			return ;
		}
		else
			throw (1);
	}
}

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) {

}
RobotomyRequestForm::RobotomyRequestForm(string target) : AForm("RobotomyRequestForm", 72, 45) ,target(target) {

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
