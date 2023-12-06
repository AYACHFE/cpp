/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 11:22:16 by aachfenn          #+#    #+#             */
/*   Updated: 2023/12/06 10:24:36 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static int i = 0;
void	error() {
	cout << "Error" << i << endl;
	exit (1);
}

void import_data(string input) {

	std::stack<float> ms;
	std::istringstream iss(input);
    std::string token;
    while (iss >> token) {
		bool check = true;
		
		if (token.length() > 1 && (token[0] != '+'))
			error();
		// if (token[0] == '+' && token.length() > 2)
		// 	error();
		if (token == "*" || token == "/" || token == "+" || token == "-") {
			if (ms.size() < 2)
				error();
			int second = ms.top();
			ms.pop();
			int first = ms.top();
			ms.pop();
			if (token == "*")
				ms.push(first * second);
			else if (token == "/")
				ms.push(first / second);
			else if (token == "+")
				ms.push(first + second);
			else if (token == "-")
				ms.push(first - second);
			check = false;
		}
		else if (!isdigit(token[0]))
			error();
		if (check) 
			ms.push(std::atoi(token.c_str()));
	}
	if (ms.size() != 1)
		error();
	cout << ms.top() << endl;
}
