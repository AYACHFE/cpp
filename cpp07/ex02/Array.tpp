/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:51:32 by aachfenn          #+#    #+#             */
/*   Updated: 2023/12/06 19:51:48 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename type>
Array<type>::Array(Array<type> &copy) {

	n = copy.n;
	tab = new type[n];
	for (size_t i = 0; i < n ; i++)
		tab[i] = copy.tab[i];
}

template<typename type>
Array<type> &Array<type>::operator=(Array<type> &copy) {
	
	if (this != &copy) {
		n = copy.n;
		delete[] tab;
		tab = new type[n];
		for (size_t i = 0; i < n ; i++)
			tab[i] = copy.tab[i];
	}
	return (*this);
}

template<typename type>
type &Array<type>::getpos(size_t index) {
	return (tab[index]);
}

template<typename type>
void Array<type>::fill(type data) {
	
	for(size_t i = 0; i < n; i++)
		tab[i] = data;
}

template<typename type>
void Array<type>::settab(size_t index,type data) {
	tab[index] = data;
}

template<typename type>
type &Array<type>::operator[](size_t index) {
	
	if (index >= n)
		throw (std::exception());
	return (tab[index]);
}

template<typename type>
Array<type>::Array() : n(1) {
	
	tab = new type[n];
	// cout << "Constructor called su" << endl;
}

template<typename type>
Array<type>::Array(size_t n_) : n(n_){

	tab = new type[n];
	// cout << "Constructor called succcccc" << endl;
}

template<typename type>
Array<type>::~Array() {
	delete[] tab;
}

template<typename type>
size_t Array<type>::size() const {
	return (n);
}
