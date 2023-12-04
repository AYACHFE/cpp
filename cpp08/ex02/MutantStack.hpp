/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:57:04 by aachfenn          #+#    #+#             */
/*   Updated: 2023/12/04 10:18:49 by aachfenn         ###   ########.fr       */
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

	public:
	//ORTHODOX
		MutantStack();
		MutantStack(const MutantStack &copy);
		~MutantStack();
		MutantStack &operator=(const MutantStack &op);
	//
	
	typedef typename std::stack<type>::container_type::iterator iterator;
	iterator begin();
	iterator end();
};

#include "MutantStack.tpp"