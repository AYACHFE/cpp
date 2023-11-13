/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:12:39 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/13 13:43:37 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cmath>

void ScalarConverter::convert(string val) {
	
	char *tmp;
	double var = strtod(val.c_str(), &tmp);
	
	// cout << "-------------var is '" << var << "' tmp is '"<< tmp << "'-------------" << endl;

	if (!isnan(var) && (tmp[0] == 'f' && tmp[1] == 0))
	{
		if (!isprint(var))
			cout << "char: Non displayable" << endl;
		else
			cout << "char: '" << static_cast<char>(var) << "'" << endl;
		cout << "int: " << static_cast<int>(var) << endl;
		cout << "float: " << static_cast<float>(var) <<  ".0f" << endl;
		cout << "double: " << var <<  ".0" << endl;
	}
	else if (tmp && tmp[1] == 0 && var == 0)
	{
		//for characters
		if (!isprint(tmp[0]))
			cout << "Char: Non displayable" << endl;
		else
			cout << "char: '" << tmp[0] << "'" << endl;
		cout << "int: " << static_cast<int>(*tmp) << endl;
		cout << "float: " << static_cast<float>(*tmp) <<  ".0f" << endl;
		cout << "double: " << static_cast<double>(*tmp) <<  ".0" << endl;
	}
	else if ((isnan(var) && ((tmp[0] == 'f' && tmp[1] == 0) || tmp[0] == 0)) || (string(tmp).length() > 0 && var == 0))
	{
		cout << "char: impossible" << endl;
		cout << "int: impossible" << endl;
		cout << "float: nanf" << endl;
		cout << "double: nan" << endl;
	}
	else if (tmp[0] == 0)
	{
		size_t pos = val.find(".", 0);
		if (!isprint(var))
			cout << "char: Non displayable" << endl;
		else 
			cout << "char: '" << static_cast<char>(var) << "'" << endl;

		if (var >= INT_MIN && var <= INT_MAX)
			cout << "int: " << static_cast<int>(var) << endl;
		else
			cout << "int: inf" << endl;
		if (pos == std::string::npos) {
			cout << "float: " << static_cast<float>(var) <<  ".0f" << endl;
			cout << "double: " << var <<  ".0" << endl;
		}
		else {
			cout << "float: " << static_cast<float>(var) << "f" << endl;
			cout << "double: " << var << endl;
		}
	}
	else {
		cout << "char: impossible" << endl;
		cout << "int: impossible" << endl;
		cout << "float: nanf" << endl;
		cout << "double: nan" << endl;
	}
}

//Orthodox
ScalarConverter::ScalarConverter() {
}

ScalarConverter::ScalarConverter(ScalarConverter &copy) {
	*this = copy;
}

ScalarConverter::~ScalarConverter() {
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter &tmp) {
	static_cast<void>(tmp);
	return *this;
}
//