/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:56:38 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/17 20:52:42 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin(); 
	// MutantStack<int>::iterator ite = mstack.end();
	++it;
	// --it;
	// while (it != ite)
	// {
	// 	std::cout << *it << std::endl;
	// 	++it;
	// }
	// std::stack<int> s(mstack);
	return 0;
}

// int main() {
//     std::stack<int> myStack;
    
//     myStack.push(10);
//     myStack.push(20);
//     myStack.push(30);
    
//     // Create a temporary stack
//     std::stack<int> tempStack = myStack;
    
//     // Iterate over the elements of the temporary stack
//     while (!tempStack.empty()) {
//         int element = tempStack.top();
//         std::cout << element << std::endl;
//         tempStack.pop();
//     }
    
//     return 0;
// }
