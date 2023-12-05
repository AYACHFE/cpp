/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:25:20 by aachfenn          #+#    #+#             */
/*   Updated: 2023/12/05 15:34:32 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <array>
#include <exception>

using std::cout;
using std::endl;
using std::string;

class Span {
		unsigned int N;
		std::vector<int> tab;
		int counter;
	public:
	//orthodox
		Span();
		Span(const Span &copy);
		~Span();
		Span &operator=(const Span &op);
	//
		Span(int nu);
		void	addNumber(int to_add);
		void	addrange(std::vector<int>::iterator from, std::vector<int>::iterator to);
		int		shortestSpan();
		int		longestSpan();
};
