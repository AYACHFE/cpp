# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/26 17:41:54 by aachfenn          #+#    #+#              #
#    Updated: 2023/10/07 15:04:59 by aachfenn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC     = main.cpp Animal.cpp Dog.cpp Cat.cpp  Brain.cpp

CXXFLAGS   = -Wall -Wextra -Werror -std=c++98

OBJS    = main.o Animal.o Dog.o Cat.o  Brain.o

RM      = rm -f

NAME    = Brain

${NAME} :	${OBJS} Animal.hpp Dog.hpp Cat.hpp  Brain.hpp
		c++ ${CXXFLAGS} ${SRC} -o ${NAME}

all     : ${NAME}

clean   :
		${RM} ${OBJS}

fclean  : clean
		${RM} ${NAME}

re      : fclean all
