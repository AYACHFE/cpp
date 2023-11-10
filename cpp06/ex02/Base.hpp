/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:09:55 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/10 14:44:08 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Base {
	public:
		Base *generate(void);
		void identify(Base* p);
		void identify(Base& p);
		virtual ~Base();
};

class A :public Base {
};

class B :public Base {
};

class C :public Base {
};
