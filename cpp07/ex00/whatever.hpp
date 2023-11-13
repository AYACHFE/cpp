/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 09:29:39 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/12 10:30:12 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
using std::cout;
using std::endl;
using std::string;


template<typename type>
void swap(type &arg_1, type &arg_2) {
	type tmp = arg_2;
	arg_2 = arg_1;
	arg_1 = tmp;
}

template<typename type>
type &min(type &arg_1, type &arg_2) {

	if (arg_1 >= arg_2)
		return (arg_2);
	if (arg_2 > arg_1)
		return (arg_1);
	return (arg_1);
}

template<typename type>
type &max(type &arg_1, type &arg_2) {

	if (arg_1 <= arg_2)
		return (arg_2);
	if (arg_2 < arg_1)
		return (arg_1);
	return (arg_1);
}

class Watever {
	public:
		
};