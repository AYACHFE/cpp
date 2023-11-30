/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:30:08 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/29 08:48:54 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"

int main()
{
	Base *random = generate();
	A *a = static_cast<A*>(random);

	identify(a);
	identify(*random);
	delete random;
}
