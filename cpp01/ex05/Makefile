# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 11:58:41 by aachfenn          #+#    #+#              #
#    Updated: 2023/09/21 12:04:46 by aachfenn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC     = main.cpp Harl.cpp

FLAGS   = -Wall -Wextra -Werror -std=c++98

OBJS    = main.o Harl.o

RM      = rm -f

NAME    = Harl

${NAME} :	${OBJS}
		c++ ${FLAGS} ${SRC} -o ${NAME}

all     : ${NAME}

clean   :
		${RM} ${OBJS}

fclean  : clean
		${RM} ${NAME}

re      : fclean all
