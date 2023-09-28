# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 12:55:23 by aachfenn          #+#    #+#              #
#    Updated: 2023/09/28 12:55:52 by aachfenn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC     = main.cpp

FLAGS   = -Wall -Wextra -Werror -std=c++98

OBJS    = main.o

RM      = rm -f

NAME    = ex03

${NAME} :	${OBJS}
		c++ ${FLAGS} ${SRC} -o ${NAME}

all     : ${NAME}

clean   :
		${RM} ${OBJS}

fclean  : clean
		${RM} ${NAME}

re      : fclean all
