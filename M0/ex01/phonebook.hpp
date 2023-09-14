/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:10:49 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/14 15:21:04 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contacts.hpp"

class PhoneBook {
		Contacts	contact[8];
	public:		
		Contacts* getContacts()
		{
			return (contact);
		}
};

#endif