/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:12:39 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/21 12:07:25 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	error() {
	cout << "char: impossible" << endl;
	cout << "int: impossible" << endl;
	cout << "float: nanf" << endl;
	cout << "double: nan" << endl;
}

bool my_inf(double nbr, int check) {

	std::stringstream stream;
	if (check == 1)
		stream << static_cast<float>(nbr);
	else
		stream << nbr;
	string tmp = stream.str();
	return (tmp == "-inf" || tmp == "inf");
}

void	to_float(double nbr) {
	if (!isprint(nbr)) {
		if (nbr >= 127 || nbr < 0)
			cout << "char: impossible" << endl;
		else
			cout << "char: Non displayable" << endl;
	}
	else
		cout << "char: '" << static_cast<char>(nbr) << "'" << endl;
	if (nbr >= INT_MIN && nbr <= INT_MAX)
		cout << "int: " << static_cast<int>(nbr) << endl;
	else
		cout << "int: impossible" << endl;
	if (!my_inf(nbr, 1)) {

		cout << "float: " << static_cast<float>(nbr) <<  ".0f" << endl;
		cout << "double: " << nbr <<  ".0" << endl;
	}
	else {
		cout << "float: " << static_cast<float>(nbr) << endl;
		cout << "double: " << nbr << endl;
	}
}

void	to_character(char *tmp) {
	if (!isprint(tmp[0]))
		cout << "Char: Non displayable" << endl;
	else
		cout << "char: '" << tmp[0] << "'" << endl;
	cout << "int: " << static_cast<int>(*tmp) << endl;
	cout << "float: " << static_cast<float>(*tmp) <<  ".0f" << endl;
	cout << "double: " << static_cast<double>(*tmp) <<  ".0" << endl;
}

void	to_int_double(string val, double nbr) {
	size_t pos = val.find(".", 0);
	if (!isprint(nbr)) {
		if (nbr >= 127 || nbr < 0)
			cout << "char: impossible" << endl;
		else
			cout << "char: Non displayable" << endl;
	}
	else 
		cout << "char: '" << static_cast<char>(nbr) << "'" << endl;

	if (nbr >= INT_MIN && nbr <= INT_MAX)
		cout << "int: " << static_cast<int>(nbr) << endl;
	else
		cout << "int: impossible" << endl;
	if (pos == std::string::npos || nbr == floor(nbr)) {
		if (!my_inf(nbr, 1) && nbr <= FLT_MAX)
			cout << "float: " << static_cast<float>(nbr) <<  ".0f" << endl;
		else
			cout << "float: " << static_cast<float>(nbr) << endl;

		if (!my_inf(nbr, 0) &&nbr <= DBL_MAX)
			cout << "double: " << nbr <<  ".0" << endl;
		else
			cout << "double: " << nbr << endl;
	}
	else {
		cout << "float: " << static_cast<float>(nbr) << "f" << endl;
		cout << "double: " << nbr << endl;
	}
}

bool my_isnan(double value) {

	return (value != value);
}

void inf_m() {
	cout << "char: impossible" << endl;
	cout << "int: impossible" << endl;
	cout << "float: -inf" << endl;
	cout << "double: -inf" << endl;
}

void ScalarConverter::convert(string val) {

	char *tmp;
	double nbr = strtod(val.c_str(), &tmp);
	
	cout << "-------------nbr is '" << nbr << "' tmp is '"<< tmp << "'-------------" << endl;

	if (!my_isnan(nbr) && (tmp[0] == 'f' && tmp[1] == 0))
		to_float(nbr);
	else if (tmp && tmp[1] == 0 && nbr == 0)
		to_character(tmp);
	else if ((my_isnan(nbr) && ((tmp[0] == 'f' && tmp[1] == 0) || tmp[0] == 0)) || (string(tmp).length() > 0 && nbr == 0))
		error();
	else if (tmp[0] == 0)
		to_int_double(val, nbr);
	else
		error();
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
	if (this == &tmp)
		return (*this);
	return *this;
}
//