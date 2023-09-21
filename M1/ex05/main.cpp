/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:09:05 by aachfenn          #+#    #+#             */
/*   Updated: 2023/09/21 12:38:32 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl comp;

	comp.complain("debug");
	comp.complain("info");
	comp.complain("warning");
	comp.complain("error");
	comp.complain("ls");
}
