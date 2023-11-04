# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/25 15:21:21 by aachfenn          #+#    #+#              #
#    Updated: 2023/10/04 09:51:26 by aachfenn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC     = main.cpp ClapTrap.cpp ScavTrap.cpp

CXXFLAGS   = -Wall -Wextra -Werror -std=c++98

OBJS    = main.o ClapTrap.o ScavTrap.o

RM      = rm -f

NAME    = ScavTrap

${NAME} :	${OBJS} ClapTrap.hpp ScavTrap.hpp
		c++ ${CXXFLAGS} ${OBJS} -o ${NAME}

all     : ${NAME}

clean   :
		${RM} ${OBJS}

fclean  : clean
		${RM} ${NAME}

re      : fclean all
