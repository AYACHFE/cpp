/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:18:59 by aachfenn          #+#    #+#             */
/*   Updated: 2023/10/05 10:28:40 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
	std::cout << "here" << std::endl;
}

void IMateriaSource::learnMateria(AMateria *materia) {
	materia->clone();
}

AMateria* IMateriaSource::createMateria(std::string const & type) {
	
	return (type);
}
