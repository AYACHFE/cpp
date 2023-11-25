# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 10:11:11 by aachfenn          #+#    #+#              #
#    Updated: 2023/11/25 11:30:16 by aachfenn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC     = $(wildcard *.cpp)

CXXFLAGS   = -Wall -Wextra -Werror -std=c++98

OBJS    = ${SRC:.cpp=.o}

RM      = rm -f

NAME    = RPN

${NAME} :	${OBJS} $(wildcard *.hpp)
		c++ ${CXXFLAGS} ${OBJS} -o ${NAME}

all     : ${NAME}

clean   :
		${RM} ${OBJS}

fclean  : clean
		${RM} ${NAME}

re      : fclean all
