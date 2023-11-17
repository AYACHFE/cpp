/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:09:17 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/17 12:29:51 by aachfenn         ###   ########.fr       */
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
void push(type to_push) {
	st.push(to_push);
}

template<typename type>
void pop() {
	st.pop();
}

template<typename type>
size_t begin() {
	return (sp.begin());
}
template<typename type>
size_t end() {
	return (sp.end());
}
template<typename type>
size_t size() {
	return (sp.size());
}
template<typename type>
size_t top() {
	return (sp.top());
}