# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 08:24:39 by aachfenn          #+#    #+#              #
#    Updated: 2023/11/06 15:39:07 by aachfenn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC     = main.cpp Bureaucrat.cpp Form.cpp

CXXFLAGS   = -Wall -Wextra -Werror -std=c++98

OBJS    = main.o Bureaucrat.o Form.o

RM      = rm -f

NAME    = exxx

${NAME} :	${OBJS} Bureaucrat.hpp
		c++ ${CXXFLAGS} ${OBJS} -o ${NAME}

all     : ${NAME}

clean   :
		${RM} ${OBJS}

fclean  : clean
		${RM} ${NAME}

re      : fclean all
