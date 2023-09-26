# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/25 15:21:21 by aachfenn          #+#    #+#              #
#    Updated: 2023/09/26 17:23:03 by aachfenn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC     = main.cpp ClapTrap.cpp FragTrap.cpp

FLAGS   = -Wall -Wextra -Werror -std=c++98

OBJS    = main.o ClapTrap.o FragTrap.o

RM      = rm -f

NAME    = FragTrap

${NAME} :	${OBJS}
		c++ ${FLAGS} ${SRC} -o ${NAME}

all     : ${NAME}

clean   :
		${RM} ${OBJS}

fclean  : clean
		${RM} ${NAME}

re      : fclean all
