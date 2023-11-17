/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:57:04 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/17 20:49:22 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

using std::cout;
using std::endl;
using std::string;



template<typename type>
class MutantStack : public std::stack<type> {
		std::stack<type> st;
	public:
	//ORTHODOX
		MutantStack();
		~MutantStack();
	//
	
	typedef typename std::stack<type>::container_type::iterator iterator;
	typedef typename std::stack<type>::container_type::const_iterator const_iterator;
	
	// void push(type to_push);
	// void pop();
	iterator begin();
	// size_t end();
	// size_t size();
	// size_t top();
};

#include "MutantStack.tpp"