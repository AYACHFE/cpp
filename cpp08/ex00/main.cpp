/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:24:52 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/20 11:58:49 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include "easyfind.tpp"
#include <vector>

int main()
{
	std::array<int, 10> tab = { 1, 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 };
	std::vector<int> tab_1;
	tab_1.push_back(1);
	tab_1.push_back(2);
	tab_1.push_back(3);

	easyfind<int, 10>(tab.data(), 8);
	easyfind<int, 10>(tab_1.data(), 10);
}
