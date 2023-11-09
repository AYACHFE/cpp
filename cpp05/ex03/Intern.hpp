/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:54:59 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/09 09:41:26 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

class Form;
class Bureaucrat;

class Intern : public Bureaucrat {
	public:
		Form	*makeForm(string name, string target);
};
