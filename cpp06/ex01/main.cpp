/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:56:39 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/17 11:45:11 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{	
	Data	ay;
	ay.i = 10;
	ay.str = "ayac";

	cout << ay.i << endl;
	cout << ay.str << endl;
	cout << "ay : " << &ay << endl;
	unsigned long address = Serializer::serialize(&ay);
	cout << address << endl;
	ay = *Serializer::deserialize(address);
	cout << ay.i << endl;
	cout << ay.str << endl;
}