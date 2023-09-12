/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 10:58:37 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/12 19:07:22 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <array>
#include <vector>


class Contacts
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		// setters
		void set_first_name(std::string var){
			first_name = var;
		}
		void set_last_name(std::string var){
			last_name = var;
		}
		void set_nickname(std::string var){
			nickname = var;
		}
		void set_phone_number(std::string var){
			phone_number = var;
		}
		void set_darkest_secret(std::string var){
			darkest_secret = var;
		}
		// getters
		std::string	get_first_name(){
			return (first_name);
		}
		std::string	get_last_name(){
			return (last_name);
		}
		std::string	get_nickname(){
			return (nickname);
		}
		std::string	get_phone_number(){
			return (phone_number);
		}
		std::string	get_darkest_secret(){
			return (darkest_secret);
		}
		void	looper(std::string new_value)
		{
			first_name = new_value;
		}
};

class PhoneBook {
	// private:
	public:
		Contacts	contact[8];
		int 		index;
		void ADD();
		void SEARCH();
		
};

#include <iomanip>

void format(const std::string& text) {
	std::cout << " | ";
    std::string formattedText = text.substr(0, 10);
    if (formattedText.length() >= 10)
        formattedText[9] = '.';
    std::cout << std::right << std::setw(10) << formattedText;
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
			break ;
		else if (input == "ADD")
		{
			if (i == 8)
			{
				i = 0;
				while (i < 7)
				{
					phonebook.contact[i].set_first_name(phonebook.contact[i + 1].get_first_name());
					phonebook.contact[i].set_last_name(phonebook.contact[i + 1].get_last_name());
					phonebook.contact[i].set_nickname(phonebook.contact[i + 1].get_nickname());
					phonebook.contact[i].set_phone_number(phonebook.contact[i + 1].get_phone_number());
					phonebook.contact[i].set_darkest_secret(phonebook.contact[i + 1].get_darkest_secret());
					i++;
				}
				i = 7;
			}
			std::cout << "your contact first_name : " << std::endl;
			getline(std::cin, input);
			phonebook.contact[i].set_first_name(input);
			std::cout << "your contact last_name : " << std::endl;
			getline(std::cin, input);
			phonebook.contact[i].set_last_name(input);
			std::cout << "your contact nickname : " << std::endl;
			getline(std::cin, input);
			phonebook.contact[i].set_nickname(input);
			std::cout << "your contact phone_number : " << std::endl;
			getline(std::cin, input);
			phonebook.contact[i].set_phone_number(input);
			std::cout << "your contact darkest_secret : " << std::endl;
			getline(std::cin, input);
			phonebook.contact[i].set_darkest_secret(input);
			i++;
		}
		else if (input == "SEARCH")
		{
			int	index;
			int j = 1;
			while (j <= i)
			{
				std::cout << j;
				format(phonebook.contact[j - 1].get_first_name());
				format(phonebook.contact[j - 1].get_last_name());
				format(phonebook.contact[j - 1].get_nickname());
				std::cout << " | " << std::endl;
				j++;
			}
			std::cout << "chose your contact index" << std::endl;
			std::cin >> index;
			if (index > 0 && index <= 8){
				std::cout << "_-----------------------------------_" << std::endl;
				std::cout << "first_name : " <<phonebook.contact[index - 1].get_first_name() << std::endl;
				std::cout << "last_name : " << phonebook.contact[index - 1].get_last_name() << std::endl;
				std::cout << "nickname : " << phonebook.contact[index - 1].get_nickname() << std::endl;
				std::cout << "phone_number : " << phonebook.contact[index - 1].get_phone_number() << std::endl;
				std::cout << "darkest_secret : " << phonebook.contact[index - 1].get_darkest_secret();
				std::cout << std::endl << "_-----------------------------------_" << std::endl;
			}
			else
				std::cout << "WRONG INDEX" << std::endl;
		}
	}
	return (0);
}