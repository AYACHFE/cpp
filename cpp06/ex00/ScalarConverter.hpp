/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:12:19 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/20 15:26:20 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cfloat>

using std::cout;
using std::endl;
using std::string;

class ScalarConverter {
		ScalarConverter();
	public:
	//Orthodox
		ScalarConverter(ScalarConverter &copy);
		~ScalarConverter();
		ScalarConverter &operator=(ScalarConverter &tmp);
	//
		static void convert(string val);
};
