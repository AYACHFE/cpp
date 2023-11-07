/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:48:05 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/14 21:03:31 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void Contacts::set_first_name(std::string var){
	first_name = var;
}

void Contacts::set_last_name(std::string var){
	last_name = var;
}

void Contacts::set_nickname(std::string var){
	nickname = var;
}

void Contacts::set_phone_number(std::string var){
	phone_number = var;
}

void Contacts::set_darkest_secret(std::string var){
	darkest_secret = var;
}

std::string	Contacts::get_first_name(){
	return (first_name);
}
std::string	Contacts::get_last_name(){
	return (last_name);
}

std::string	Contacts::get_nickname(){
	return (nickname);
}

std::string	Contacts::get_phone_number(){
	return (phone_number);
}

std::string	Contacts::get_darkest_secret(){
	return (darkest_secret);
}
