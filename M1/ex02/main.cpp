/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:25:10 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/20 12:41:28 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	// MEM
	std::cout << "ADRESS OF STR " << &str << std::endl;
	std::cout << "ADRESS OF stringPTR " << stringPTR << std::endl;
	std::cout << "ADRESS OF stringREF " << &stringREF << std::endl;
	// value
	std::cout << "STR       " << str << std::endl;
	std::cout << "stringPTR " << *stringPTR << std::endl;
	std::cout << "stringREF " << stringREF << std::endl;
}