/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:58:45 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/13 13:40:42 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
using std::cout;
using std::endl;
using std::string;

typedef struct s_Data {
	int i;
	string str;
} Data;

class Serializer {
	public:
	// ORthodox
		Serializer();
		Serializer(Serializer &src);
		~Serializer();
		Serializer& operator=(Serializer &src);
	//
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};