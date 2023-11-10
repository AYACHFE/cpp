/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:22:12 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/10 15:08:32 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *Base::generate(void) {
	
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

// void Base::identify(Base* p) {

// }

void Base::identify(Base& p) {
	if (A == p)
}

Base::~Base() {
	
}
