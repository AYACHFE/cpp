/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:26:36 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/22 15:09:54 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <array>

using std::cout;
using std::endl;
using std::string;

template<typename type>
void	easyfind(type arg_1, int to_find);

#include "easyfind.tpp"