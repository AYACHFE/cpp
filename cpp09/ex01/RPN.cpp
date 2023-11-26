/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 11:22:16 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/26 10:11:23 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <sstream>

void import_data(string input) {

	std::stack<int> ms;
	std::istringstream iss(input);
    std::string token;
    while (iss >> token) {
		bool check = true;
		
		if (token.length() > 1 && (token[0] != '+')) {
			cout << "Error" << endl;
			return ;
		}
		if (token[0] == '+' && token.length() > 2) {
			cout << "Error" << endl;
			return ;	
		}
		if (token == "*" || token == "/" || token == "+" || token == "-") {
			if (ms.size() < 2) {	
				cout << "Error" << endl;
				return ;
			}
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
		if (check) 
			ms.push(std::atoi(token.c_str()));
	}
	cout << ms.top() << endl;
}
