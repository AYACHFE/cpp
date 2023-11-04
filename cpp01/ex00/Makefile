# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 13:20:55 by aachfenn          #+#    #+#              #
#    Updated: 2023/09/21 13:08:01 by aachfenn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC     = main.cpp newZombie.cpp Zombie.cpp randomChump.cpp

FLAGS   = -Wall -Wextra -Werror -std=c++98

OBJS    = main.o newZombie.o Zombie.o randomChump.o

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
