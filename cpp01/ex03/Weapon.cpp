/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:20:12 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/21 12:39:36 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType() const {
	return type;
}

void Weapon::setType(const std::string& newType) 
{
	type = newType;
}
