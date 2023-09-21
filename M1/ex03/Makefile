# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 12:16:52 by aachfenn          #+#    #+#              #
#    Updated: 2023/09/21 12:41:09 by aachfenn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC     = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

FLAGS   = -Wall -Wextra -Werror -std=c++98

OBJS    = main.o Weapon.o HumanA.o HumanB.o

RM      = rm -f

NAME    = war

${NAME} :	${OBJS}
		c++ ${FLAGS} ${SRC} -o ${NAME}

all     : ${NAME}

clean   :
		${RM} ${OBJS}

fclean  : clean
		${RM} ${NAME}

re      : fclean all
