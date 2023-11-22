/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:29:25 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/22 16:00:53 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename type>
void	easyfind(type arg_1, int to_find) {

	typename type::iterator it = arg_1.begin();
	typename type::iterator ite = arg_1.end();
	for(;it != ite;) {
		if (*it == to_find) {
			cout << "the VALUE \"" << to_find << "\" " << "was found at INDEX " << endl;
				return ;
		}
		it++;
	}
	std::cerr << "The value was not found" << endl;
	return ;
}
