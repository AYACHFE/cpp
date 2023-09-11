# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/09 13:40:32 by aachfenn          #+#    #+#              #
#    Updated: 2023/09/09 13:41:52 by aachfenn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC     = phonebook.cpp

FLAGS   = -Wall -Wextra -Werror -std=c++98

OBJS    = phonebook.o

RM      = rm -f

NAME    = phonebook

${NAME} :	${OBJS}
		g++ ${FLAGS} ${SRC} -o ${NAME}

all     : ${NAME}

clean   :
		${RM} ${OBJS}

fclean  : clean
		${RM} ${NAME}

re      : fclean all
