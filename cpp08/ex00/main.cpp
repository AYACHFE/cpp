/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:24:52 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/22 15:17:11 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
	std::array<int, 10> tab = { 1, 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 };
	std::vector<int> tab_1;
	tab_1.push_back(1);
	tab_1.push_back(2);
	tab_1.push_back(3);
	std::list<int> list;
	list.push_back(10);
	list.push_back(20);
	list.push_back(30);
	list.push_back(40);
	list.push_back(50);
	list.push_back(60);
	list.push_back(70);
	

	easyfind<std::list<int> >(list, 40);
	easyfind<std::vector<int> >(tab_1, 1);
	easyfind<std::array<int, 10> >(tab, 10);
}
