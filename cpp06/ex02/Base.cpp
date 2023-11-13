/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:22:12 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/13 15:51:06 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate(void) {
	
	srand(time(NULL));
	int r = rand() % 3;
	cout << r << endl;
	if (r == 0)
		return (new A());
	if (r == 1)
		return (new B());
	if (r == 2)
		return (new C());
	return (NULL);
}

void identify(Base* p) {
	if (!p)
		return ;
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
	static_cast<void>(src);
	return (*this);
}

Base::~Base() {
	
}
