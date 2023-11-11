/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:54:59 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/09 17:19:06 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include <iostream>

class Form;
class Bureaucrat;

class Intern {
	public:
		AForm	*my_Shrubbery(string target);
		AForm	*my_Robot(string target);
		AForm	*my_President(string target);
		AForm	*makeForm(string name, string target);
};
