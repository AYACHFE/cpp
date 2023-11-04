/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 10:58:37 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/15 13:12:41 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contacts*	PhoneBook::getContacts()
{
	return (contact);
}

void format(const std::string& text)
{
	std::cout << " | ";
    std::string newstr = text.substr(0, 10);
    if (newstr.length() >= 10)
        newstr[9] = '.';
    std::cout << std::right << std::setw(10) << newstr;
}

int main()
{
	std::string input;
	PhoneBook phonebook;
	int i = 0;

	while (1)
	{
		std::cout << "ADD, SEARCH or EXIT " << std::endl;
		getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
		if (input == "EXIT" || input == "exit")
			break;
		else if (input == "ADD")
		{
			if (i == 8)
			{
				i = 0;
				while (i < 7)
				{
					phonebook.getContacts()[i].set_first_name(phonebook.getContacts()[i + 1].get_first_name());
					phonebook.getContacts()[i].set_last_name(phonebook.getContacts()[i + 1].get_last_name());
					phonebook.getContacts()[i].set_nickname(phonebook.getContacts()[i + 1].get_nickname());
					phonebook.getContacts()[i].set_phone_number(phonebook.getContacts()[i + 1].get_phone_number());
					phonebook.getContacts()[i].set_darkest_secret(phonebook.getContacts()[i + 1].get_darkest_secret());
					i++;
				}
				i = 7;
			}
			std::cout << "your contact first_name : " << std::endl;
			getline(std::cin, input);
			if (input.empty()){
				std::cout << "this field can't be empty" << std::endl;
				continue;
			}
			phonebook.getContacts()[i].set_first_name(input);
			std::cout << "your contact last_name : " << std::endl;
			getline(std::cin, input);
			if (input.empty()){
				std::cout << "this field can't be empty" << std::endl;
				continue;
			}
			phonebook.getContacts()[i].set_last_name(input);
			std::cout << "your contact nickname : " << std::endl;
			getline(std::cin, input);
			if (input.empty()){
				std::cout << "this field can't be empty" << std::endl;
				continue;
			}
			phonebook.getContacts()[i].set_nickname(input);
			std::cout << "your contact phone_number : " << std::endl;
			getline(std::cin, input);
			if (input.empty()){
				std::cout << "this field can't be empty" << std::endl;
				continue;
			}
			phonebook.getContacts()[i].set_phone_number(input);
			std::cout << "your contact darkest_secret : " << std::endl;
			getline(std::cin, input);
			if (input.empty()){
				std::cout << "this field can't be empty" << std::endl;
				continue;
			}
			phonebook.getContacts()[i].set_darkest_secret(input);
			i++;
		}
		else if (input == "SEARCH")
		{
			std::string index;
			int j = 1;
			while (j <= i)
			{
				std::cout << j;
				format(phonebook.getContacts()[j - 1].get_first_name());
				format(phonebook.getContacts()[j - 1].get_last_name());
				format(phonebook.getContacts()[j - 1].get_nickname());
				std::cout << " | " << std::endl;
				j++;
			}
			std::cout << "chose your contact index" << std::endl;
			getline(std::cin,index);
			int res = std::atoi(index.c_str());
			if (index.length() > 1 || res > i)
				std::cout << "CHECK YOUR INDEX" << std::endl;
			else if (res > 0 && res <= 8){
				std::cout << "-----------------------------------" << std::endl;
				std::cout << "first_name     : " <<phonebook.getContacts()[res - 1].get_first_name() << std::endl;
				std::cout << "last_name      : " << phonebook.getContacts()[res - 1].get_last_name() << std::endl;
				std::cout << "nickname       : " << phonebook.getContacts()[res - 1].get_nickname() << std::endl;
				std::cout << "phone_number   : " << phonebook.getContacts()[res - 1].get_phone_number() << std::endl;
				std::cout << "darkest_secret : " << phonebook.getContacts()[res - 1].get_darkest_secret();
				std::cout << std::endl << "-----------------------------------" << std::endl;
			}
			else {
				std::cout << "WRONG INDEX" << std::endl;
			}
		}
	}
	return (0);
}
