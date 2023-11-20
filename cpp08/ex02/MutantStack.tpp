/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:09:17 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/20 11:42:48 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename type>
MutantStack<type>::MutantStack() {
	
}

template<typename type>
MutantStack<type>::~MutantStack() {
	
}

template<typename type>
void MutantStack<type>::push(type to_push) {

	this->st.push_back(to_push);
}

template<typename type>
void MutantStack<type>::pop() {
	st.pop_back();
}

template<typename type>
typename std::stack<type>::container_type::iterator MutantStack<type>::begin() {

	return (this->st.begin());
}

template<typename type>
typename std::stack<type>::container_type::iterator MutantStack<type>::end() {

	return (st.end());
}

template<typename type>
size_t MutantStack<type>::size() {

	return (st.size());
}

template<typename type>
size_t MutantStack<type>::top() {

	return (st.back());
}
