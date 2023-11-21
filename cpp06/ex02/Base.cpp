/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:22:12 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/21 12:38:19 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void) {
	
	srand(time(NULL));
	int r = rand() % 3;
	if (r == 0)
		return (new A());
	if (r == 1)
		return (new B());
	if (r == 2)
		return (new C());
	return (NULL);
}

void identify(Base* p) {

	if (dynamic_cast<A *>(p) != NULL)
		cout << "the type is 'A'" << endl;
	else if (dynamic_cast<A *>(p) == NULL)
		cout << "unknown type" << endl;
	if (dynamic_cast<B *>(p) != NULL)
		cout << "the type is 'B'" << endl;
	else if (dynamic_cast<B *>(p) == NULL)
		cout << "unknown type" << endl;
	if (dynamic_cast<C *>(p) != NULL)
		cout << "the type is 'C'" << endl;
	else if (dynamic_cast<C *>(p) == NULL)
		cout << "unknown type" << endl;
}

void identify(Base& p) {
	
	try {
		p = dynamic_cast<A &>(p);
			cout << "the type is 'A'" << endl;
	}
	catch (std::bad_cast &exception) {
		std::cerr << exception.what() << endl;
	}
	try {
		p = dynamic_cast<B &>(p);
			cout << "the type is 'B'" << endl;
	}
	catch (std::bad_cast &exception) {
		std::cerr << exception.what() << endl;
	}
	try {
		p = dynamic_cast<C &>(p);
			cout << "the type is 'C'" << endl;
	}
	catch (std::bad_cast &exception) {
		std::cerr << exception.what() << endl;
	}
}

//ORTHODOX
Base::Base() {
}

Base::Base(Base &src) {
	*this = src;
}

Base& Base::operator=(Base &src) {
	if (this == &src)
		return (*this);
	return (*this);
}

Base::~Base() {
	
}
