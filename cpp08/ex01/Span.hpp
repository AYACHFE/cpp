/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:25:20 by aachfenn          #+#    #+#             */
/*   Updated: 2023/12/04 10:26:56 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <array>

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
		void	addrange(std::vector<int> my_v);
		int		shortestSpan();
		int		longestSpan();
};
