/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:34:16 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/16 13:22:31 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"



int main()
{
	int arr[5] = {10,7,5,3,1};
	
	::iter(arr, 5, funct);
	cout << endl;
	string st[5] = {
		"hello",
		"there",
		"everyone",
		"aymane",
		"is here"
	};
	::iter(st, 5, funct);
	
	cout << endl;
	bool bl[3] = {true, false, true};
	::iter(bl, 3, funct);
}