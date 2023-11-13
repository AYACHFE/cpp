/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:30:08 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/11 21:12:02 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	Base *bs = new Base();
	Base bts;
	Base &bt = bts;
	bs->identify(bs->generate());
	cout << "-----------\n";
	bt.identify(bt.generate());
}