/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:10:49 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/15 13:39:48 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contacts.hpp"
#include <iostream>
#include <string>
#include <array>
#include <iomanip>


class PhoneBook {
		Contacts	contact[8];
	public:
	// PhoneBook();
	// ~PhoneBook();
		Contacts* getContacts();
};

#endif