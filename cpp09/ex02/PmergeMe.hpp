/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:08:43 by aachfenn          #+#    #+#             */
/*   Updated: 2023/12/06 13:16:52 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <array>
#include <vector>
#include <fstream>
#include <string>
#include <iterator>
#include <cmath>
#include <sstream>
#include <list>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::list;

void		merge_insert_list(list<int> input);
list<int> error_check_deq(char **av);
void		recur_deq(list<int> &simple, int pairs_nb, int pairs_size);
void		insert_deq(list<int> &simple, int pairs_nb, int pairs_size, list<int> rest);


void		merge_insert(vector<int> input);
vector<int> error_check(char **av);
void		recur(vector<int> &simple, int pairs_nb, int pairs_size);
void		insert(vector<int> &simple, int pairs_nb, int pairs_size, vector<int> rest);
