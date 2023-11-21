/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:25:19 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/21 12:58:18 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(int nu) : N(nu) , counter(0) {

	// tab.resize(nu);
}

void	Span::addNumber(int to_add) {
	
	// cout << "to_add : " << to_add << endl;
	if (static_cast<size_t>(counter) < N) {
		tab.push_back(to_add);
		counter++;
	}
	// for(int i = 0;i < counter; i++)
	// 	cout << "tab[] : " << tab[i] << endl;
}

int		Span::shortestSpan() {

	unsigned int i = 0;
	unsigned int j = 0;
	int shortest = tab[0];

	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			if (i == j)
				j++;
			// cout << "tab["<< i << "] :" <<  tab[i] << endl;
			// cout << "tab["<< j << "] :" <<  tab[j] << endl;
			// cout << "-----------------------------\n";
			
			if (tab[i] > tab[j]) {
				if (tab[i] - tab[j] < shortest) 
					shortest = tab[i] - tab[j];
			}
			else {
				if (tab[j] - tab[i] < shortest) 
					shortest = tab[j] - tab[i];
			}			
			j++;
		}
		i++;
	}
	return shortest;
}

int		Span::longestSpan() {

	unsigned int i = 0;
	unsigned int j = 0;
	int longest = tab[0];
	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			if (i == j)
				j++;
			// cout << "tab["<< i << "] :" <<  tab[i] << endl;
			// cout << "tab["<< j << "] :" <<  tab[j] << endl;
			// cout << "-----------------------------\n";
			
			if (tab[i] > tab[j]) {
				if (tab[i] - tab[j] > longest)
					longest = tab[i] - tab[j];
			}
			else {
				if (tab[j] - tab[i] > longest) 
					longest = tab[j] - tab[i];
			}			
			j++;
		}
		i++;
	}
	return longest;
}
