/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:08:05 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/14 21:08:28 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <iostream>
#include <string>
#include <array>
#include <iomanip>

class Contacts
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
	public:
		void set_first_name(std::string var);
		void set_last_name(std::string var);
		void set_nickname(std::string var);
		void set_phone_number(std::string var);
		void set_darkest_secret(std::string var);

		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		std::string get_phone_number();
		std::string get_darkest_secret();
};

#endif