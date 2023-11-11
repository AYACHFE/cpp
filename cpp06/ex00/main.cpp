/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:10:26 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/09 16:02:51 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main()
{
	string input;
	while (1) {
		cout << "ENTER THE VALUE TO CONVERT > " ;
		getline(std::cin,input);
		if (std::cin.eof())
			break ;
		if (!input.length())
			continue;
		ScalarConverter::convert(input);
	}
}