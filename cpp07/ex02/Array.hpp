/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:32:29 by aachfenn          #+#    #+#             */
/*   Updated: 2023/12/05 18:09:49 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

using std::cout;
using std::endl;
using std::string;

template<typename type>
class Array {
		string *tab;
		size_t n;
	public:
	//ORTHODOX
		Array();
		Array(Array<type> &copy);
		Array<type> &operator=(Array<type> &copy);
		~Array();
	//
		Array(size_t n);
		type &operator[](size_t index);
		void settab(size_t index,type data);
		void fill(type data);
		type &getpos(size_t index);
		size_t size() const;
};

#include "Array.tpp"
