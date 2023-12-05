/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:24:52 by aachfenn          #+#    #+#             */
/*   Updated: 2023/12/05 16:08:28 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try {
		std::vector<int> vec;
		Span sp = Span(7);

		vec.push_back(0);
		vec.push_back(2);
		vec.push_back(3);
		vec.push_back(4);
		vec.push_back(10);
		vec.push_back(20);
		vec.push_back(50);
		sp.addrange(vec.begin(), vec.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::string err) {
		cout << err << endl;
	}
	return 0;
}