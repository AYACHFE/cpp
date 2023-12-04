/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:09:17 by aachfenn          #+#    #+#             */
/*   Updated: 2023/12/04 10:19:12 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename type>
MutantStack<type>::MutantStack() {}

template<typename type>
MutantStack<type>::~MutantStack() {}

template<typename type>
MutantStack<type>::MutantStack(const MutantStack &copy) {

	*this = copy;
}

template<typename type>
MutantStack<type> &MutantStack<type>::operator=(const MutantStack &op) {

	if (this != &op)
		this->c = op.c;
	return (*this);
}

template<typename type>
typename std::stack<type>::container_type::iterator MutantStack<type>::begin() {

	return (this->c.begin());
}

template<typename type>
typename std::stack<type>::container_type::iterator MutantStack<type>::end() {

	return (this->c.end());
}
