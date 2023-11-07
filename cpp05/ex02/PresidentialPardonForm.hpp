/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:05:48 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/07 14:07:49 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class PresidentialPardonForm :public Form  {
	public:
	//ORTHODOX
		PresidentialPardonForm();
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm &copy);
		PresidentialPardonForm &operator=(PresidentialPardonForm &presi);
	//
		void execute(Bureaucrat const & executor);
};
#endif