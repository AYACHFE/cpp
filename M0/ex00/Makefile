# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/24 23:46:37 by aachfenn          #+#    #+#              #
#    Updated: 2023/06/25 00:17:54 by aachfenn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC     = megaphone.cpp

FLAGS   = -Wall -Wextra -Werror -std=c++98

OBJS    = megaphone.o

RM      = rm -f

NAME    = megaphone

${NAME} :	${OBJS}
		g++ ${FLAGS} ${SRC} -o ${NAME}

all     : ${NAME}

clean   :
		${RM} ${OBJS}

fclean  : clean
		${RM} ${NAME}

re      : fclean all
