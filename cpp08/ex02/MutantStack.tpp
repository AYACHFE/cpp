/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:09:17 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/17 20:55:49 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename type>
MutantStack<type>::MutantStack() {
	
}

template<typename type>
MutantStack<type>::~MutantStack() {
	
}

// template<typename type>
// void push(type to_push) {
// 	st.push(to_push);
// }

// template<typename type>
// void pop() {
// 	st.pop();
// }

template<typename type>
typename std::stack<type>::container_type::iterator MutantStack<type>::begin() {
	// typename std::stack<type>::container_type::iterator it = st.begin();
	std::stack<type> tmp = st;

	while (!tmp.empty()) {
        int element = tmp.top();
        std::cout << element << std::endl;
        tmp.pop();
    }

	
	return (it);
}

// template<typename type>
// size_t end() {
// 	return (sp.end());
// }

// template<typename type>
// size_t size() {
// 	return (sp.size());
// }

// template<typename type>
// size_t top() {
// 	return (sp.top());
// }
