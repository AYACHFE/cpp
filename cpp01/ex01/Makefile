# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 12:50:23 by aachfenn          #+#    #+#              #
#    Updated: 2023/09/21 13:02:25 by aachfenn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC     = main.cpp Zombie.cpp zombieHorde.cpp

FLAGS   = -Wall -Wextra -Werror -std=c++98

OBJS    = main.o Zombie.o zombieHorde.o

RM      = rm -f

NAME    = Zombie

${NAME} :	${OBJS}
		c++ ${FLAGS} ${SRC} -o ${NAME}

all     : ${NAME}

clean   :
		${RM} ${OBJS}

fclean  : clean
		${RM} ${NAME}

re      : fclean all
