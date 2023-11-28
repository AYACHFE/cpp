/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:08:43 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/28 11:30:22 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <array>
#include <vector>
#include <fstream>
#include <string>
#include <iterator>

using std::cout;
using std::endl;
using std::string;
using std::vector;

void merge_insert(char **av);
void error_check(char **av);
void	recur(vector<int> simple, int pairs_nb, int pairs_size);
