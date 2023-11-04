# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/09 13:40:32 by aachfenn          #+#    #+#              #
#    Updated: 2023/09/14 21:05:07 by aachfenn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC     = phonebook.cpp contacts.cpp

FLAGS   = -Wall -Wextra -Werror -std=c++98

OBJS    = phonebook.o contacts.o

RM      = rm -f

NAME    = phonebook

${NAME} :	${OBJS}
		c++ ${FLAGS} ${SRC} -o ${NAME}

all     : ${NAME}

clean   :
		${RM} ${OBJS}

fclean  : clean
		${RM} ${NAME}

re      : fclean all
