# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/25 15:21:21 by aachfenn          #+#    #+#              #
#    Updated: 2023/10/05 11:35:54 by aachfenn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC     = main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp

CXXFLAGS   = -Wall -Wextra -Werror -std=c++98

OBJS    = main.o ClapTrap.o FragTrap.o ScavTrap.o

RM      = rm -f

NAME    = FragTrap

${NAME} :	${OBJS} ClapTrap.hpp FragTrap.hpp ScavTrap.hpp
		c++ ${CXXFLAGS} ${OBJS} -o ${NAME}

all     : ${NAME}

clean   :
		${RM} ${OBJS}

fclean  : clean
		${RM} ${NAME}

re      : fclean all
