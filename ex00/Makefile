# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchouikr <mchouikr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/04 12:40:06 by mchouikr          #+#    #+#              #
#    Updated: 2025/05/01 18:29:16 by mchouikr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easyfind

SRCS_DIR = srcs
INCLUDE_DIR = includes

SRCS = main.cpp

OBJS = ${SRCS:.cpp=.o}

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

.cpp.o:
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all: ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re