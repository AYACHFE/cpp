/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 23:29:56 by aachfenn          #+#    #+#             */
/*   Updated: 2023/06/25 00:18:36 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int i = 1;
	int j = 0;
	
	if (ac > 1)
	{
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				if (av[i][j] >= 'a' && av[i][j] <= 'z')
					av[i][j] = std::toupper(av[i][j]);
				std::cout << av[i][j];
				j++;
			}
			std::cout << ' ';
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
