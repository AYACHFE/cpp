/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 22:03:29 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/21 12:14:19 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4){
		std::cout << "check the ARGS NUMBER." << std::endl;
		return (0);
	}
	std::string str1 = av[2];
	std::string str2 = av[3];
	std::string inputfile = av[1];
	std::string clone = inputfile + ".replace";

	std::ifstream input_file(inputfile);
	if (!input_file){
		std::cout << "check the INPUT FILE." << std::endl;
		exit(0);
	}
	std::ofstream file_copy(clone);
	if (!input_file){
		std::cout << "AN ERROR OCCURED WHEN CREATING THE CLONE FILE." << std::endl;
		exit(0);
	}
	std::string line;
	while (std::getline(input_file, line)) {
		std::string modifiedLine;
		size_t pos = 0;

		while (pos < line.length()) {
			size_t found = line.find(str1, pos);
			if (found == std::string::npos) {
				modifiedLine += line.substr(pos);
				break;
			}
			modifiedLine += line.substr(pos, found - pos);
			modifiedLine += str2;
			pos = found + str1.length();
		}
		file_copy << modifiedLine << std::endl;
	}
	file_copy.close();
	input_file.close();
}
