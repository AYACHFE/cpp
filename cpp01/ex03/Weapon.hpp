/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:18:11 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/21 12:27:04 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon{
		std::string type;
	public:
		Weapon(std::string thetype){
			type = thetype;
		}
		~Weapon() {
        std::cout << "Weapon destroyed with type: " << type << std::endl;
		}
		const std::string&	getType() const;
		void				setType(const std::string& newType);
};

#endif