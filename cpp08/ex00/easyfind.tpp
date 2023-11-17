/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:29:25 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/16 12:22:38 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename type, int size>
void	easyfind(type *arg_1, int to_find) {

	for(int i = 0; i < size; i++) {
		if (arg_1[i] == to_find) {
			cout << "the VALUE \"" << to_find << "\" " << "was found at INDEX \"" << i << "\"" << endl;
			return ;
		}
	}
	std::cerr << "The value was not found" << endl;
	return ;
}
 