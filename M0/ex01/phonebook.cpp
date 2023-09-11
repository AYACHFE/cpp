/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 10:58:37 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/11 13:54:43 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <array>
#include <vector>


class Contacts
{
	// private:
	public:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
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
};

class PhoneBook {
	// private:
	public:
		Contacts	contact[8];
		int 		index;
		void ADD();
		void SEARACH();
		
};

// void Contacts::setName(std::string name)
// {
// 	first_name = name;
// }

int main()
{
	std::string input;
	PhoneBook phonebook;
	int i = 0;
	
	while (1)
	{
		std::cout << "ADD, SEARCH or EXIT " << std::endl;
		getline(std::cin, input);
		if (input == "EXIT" || input == "exit")
			break ;
		else if (input == "ADD")
		{
			if (i == 8)
				i = 0;
			std::cout << "your contact first_name : " << std::endl;
			getline(std::cin, input);
			phonebook.contact[i].first_name = input;
			std::cout << "your contact last_name : " << std::endl;
			getline(std::cin, input);
			phonebook.contact[i].last_name = input;
			std::cout << "your contact nickname : " << std::endl;
			getline(std::cin, input);
			phonebook.contact[i].nickname = input;
			std::cout << "your contact phone_number : " << std::endl;
			getline(std::cin, input);
			phonebook.contact[i].phone_number = input;
			std::cout << "your contact darkest_secret : " << std::endl;
			getline(std::cin, input);
			phonebook.contact[i].darkest_secret = input;

			i++;
		}
		else if (input == "SEARCH")
		{
			int	index;
			int j = 1;
			while (j <= i)
			{
				std::cout << j << " | " << phonebook.contact[j - 1].first_name << " | " << phonebook.contact[j - 1].last_name << " | " << phonebook.contact[j - 1].nickname << std::endl;
				j++;
			}
			std::cout << "chose your contact index" << std::endl;
			std::cin >> index;
			std::cout << index << "ls";
			std::cout << "first_name : " <<phonebook.contact[index - 1].first_name << std::endl;
			std::cout << "last_name : " << phonebook.contact[index - 1].last_name << std::endl;
			std::cout << "nickname : " << phonebook.contact[index - 1].nickname << std::endl;
			std::cout << "phone_number : " << phonebook.contact[index - 1].phone_number << std::endl;
			std::cout << "darkest_secret : " << phonebook.contact[index - 1].darkest_secret << std::endl;
		}
	}
	return (0);
}