/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:56:39 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/20 13:11:24 by aachfenn         ###   ########.fr       */
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
	Data alt;
	alt = *Serializer::deserialize(address);
	cout << alt.i << endl;
	cout << alt.str << endl;
}