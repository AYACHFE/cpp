/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:05:48 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/08 16:40:08 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class PresidentialPardonForm :public AForm  {
		string target;
	public:
	//ORTHODOX
		PresidentialPardonForm();
		PresidentialPardonForm(string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm &copy);
		PresidentialPardonForm &operator=(PresidentialPardonForm &presi);
	//
		void execute(Bureaucrat const & executor) const;
};
#endif