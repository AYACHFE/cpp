/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:12:19 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/13 13:38:11 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ScalarConverter {
	public:
	//Orthodox
		ScalarConverter();
		ScalarConverter(ScalarConverter &copy);
		~ScalarConverter();
		ScalarConverter &operator=(ScalarConverter &tmp);
	//
		static void convert(string val);
};
