/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:31:38 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/13 12:17:35 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
	
	Array<string> arr(5);
	arr.fill("ayac");
	arr.getpos(0) = "hello";
	for (int i = 0;i < 5; i++)
		cout << arr.getpos(i) << endl;

	cout << endl;
	Array<string> copy(arr);
	arr.getpos(1) = "there";
	for (int i = 0;i < 5; i++)
		cout << copy.getpos(i) << endl;
}
