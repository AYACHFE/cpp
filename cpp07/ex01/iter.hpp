/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:34:42 by aachfenn          #+#    #+#             */
/*   Updated: 2023/12/06 15:08:25 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
using std::cout;
using std::endl;
using std::string;

template<typename type>
void funct(const type &array) {
	cout << array << " | ";
}

template<typename type>
void	iter(type *array, int len, void funct(const type&))
{
	int i = 0;
	while (i < len)
		funct(array[i++]);
}
