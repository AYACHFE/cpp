/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:25:19 by aachfenn          #+#    #+#             */
/*   Updated: 2023/12/04 17:37:22 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(int nu) : N(nu) , counter(0) {}

Span::Span() : N(0) , counter(0) {}

Span::Span(const Span &copy) {

	*this = copy;
}

Span::~Span() {}

Span &Span::operator=(const Span &op) {

	if (this != &op) {
		this->N = op.N;
		this->tab = op.tab;
		this->counter = op.counter;
	}
	return *this;
}

void	Span::addNumber(int to_add) {

	if (static_cast<size_t>(counter) < N) {
		tab.push_back(to_add);
		counter++;
	}
}

int		Span::shortestSpan() {

	int shortest = tab[0];
	std::vector<int>::iterator it = tab.begin();
	std::sort(it, tab.end());
	for (;it != tab.end();it++) {
		
		std::vector<int>::iterator itt = tab.begin();
		for (;itt != it; itt++) {
			if (shortest > *it - *itt)
				shortest = *it - *itt;
		}
	}
	return shortest;
}

int		Span::longestSpan() {

	int longest;
	std::vector<int>::iterator it = tab.begin();
	std::sort(it, tab.end());
	longest = *(tab.end() - 1) - *(tab.begin());
	return longest;
}

void	Span::addrange(std::vector<int> my_v) {
	
	std::vector<int>::iterator it = my_v.begin();
	std::vector<int>::iterator itt = my_v.end();
	for (;it != itt;it++) {
		if (std::distance(my_v.begin(), it) > N) {
			cout << "the range is bigger than N" << endl;
			return ;
		}
		tab.push_back(*it);
	}
}