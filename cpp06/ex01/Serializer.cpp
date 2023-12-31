/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:30:55 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/20 13:09:41 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}

Serializer::Serializer() {
}

Serializer::Serializer(Serializer &src) {
	*this = src;
}

Serializer::~Serializer() {
}

Serializer& Serializer::operator=(Serializer &src) {
	if (this == &src)
		return (*this);
	return (*this);
}