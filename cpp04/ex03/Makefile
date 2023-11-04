# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 12:55:23 by aachfenn          #+#    #+#              #
#    Updated: 2023/10/07 11:02:21 by aachfenn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC     = main.cpp AMateria.cpp Cure.cpp Ice.cpp MateriaSource.cpp Character.cpp

CXXFLAGS   = -Wall -Wextra -Werror -std=c++98

OBJS    = main.o AMateria.o Cure.o Ice.o MateriaSource.o Character.o

RM      = rm -f

NAME    = ex03

${NAME} :	${OBJS} AMateria.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp
		c++ ${CXXFLAGS} ${OBJS} -o ${NAME}

all     : ${NAME}

clean   :
		${RM} ${OBJS}

fclean  : clean
		${RM} ${NAME}

re      : fclean all
