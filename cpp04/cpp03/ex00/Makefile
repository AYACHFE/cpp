# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/25 15:21:21 by aachfenn          #+#    #+#              #
#    Updated: 2023/10/04 09:56:52 by aachfenn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC     = main.cpp ClapTrap.cpp

CXXFLAGS   = -Wall -Wextra -Werror -std=c++98

OBJS    = main.o ClapTrap.o

RM      = rm -f

NAME    = ClapTrap

${NAME} :	${OBJS} ClapTrap.hpp
		c++ ${CXXFLAGS} ${OBJS} -o ${NAME}

all     : ${NAME}

clean   :
		${RM} ${OBJS}

fclean  : clean
		${RM} ${NAME}

re      : fclean all
