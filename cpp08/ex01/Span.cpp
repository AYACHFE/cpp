/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:25:19 by aachfenn          #+#    #+#             */
/*   Updated: 2023/12/05 16:07:54 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(int nu) : N(nu) , counter(1) {}

Span::Span() : N(0) , counter(1) {}

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

	if (static_cast<size_t>(counter) <= N) {
		tab.push_back(to_add);
		counter++;
	}
	else
		throw std::string("The number added are more than N");
}

int		Span::shortestSpan() {

	if (tab.size() <= 1)
		throw string("The size is less or equal to 1");
	std::sort(tab.begin(), tab.end());
	std::vector<int>::iterator it = tab.begin();
	int shortest = tab.back();
	for (;it + 1 != tab.end();it++) {

		if (shortest > (*(it + 1)) - *it)
			shortest = (*(it + 1)) - *it;
	}
	return shortest;
}

int		Span::longestSpan() {

	if (tab.size() <= 1)
		throw string("The size is less or equal to 1");
	int longest;
	std::vector<int>::iterator it = tab.begin();
	std::sort(it, tab.end());
	longest = *(tab.end() - 1) - *(tab.begin());
	return longest;
}

void	Span::addrange(std::vector<int>::iterator from, std::vector<int>::iterator to) {

	if (static_cast<size_t>(std::distance(from, to)) > N - tab.size()) {
		throw (string("the range is bigger than N"));
	}
	for (;from != to;from++) {
		tab.push_back(*from);
	}
}