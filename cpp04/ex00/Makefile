# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/26 17:41:54 by aachfenn          #+#    #+#              #
#    Updated: 2023/10/04 10:56:49 by aachfenn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC     = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

CXXFLAGS   = -Wall -Wextra -Werror -std=c++98

OBJS    = main.o Animal.o Dog.o Cat.o WrongAnimal.o WrongCat.o

RM      = rm -f

NAME    = Animal

${NAME} :	${OBJS} Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
		c++ ${CXXFLAGS} ${OBJS} -o ${NAME}

all     : ${NAME}

clean   :
		${RM} ${OBJS}

fclean  : clean
		${RM} ${NAME}

re      : fclean all
