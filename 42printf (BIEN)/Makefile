# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amunoz-n <amunoz-n@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 10:58:53 by amunoz-n          #+#    #+#              #
#    Updated: 2023/12/26 10:58:53 by amunoz-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c\
	  ft_puthex.c\
	  ft_printf_ptr.c\
	  ft_printf_unsigned_int.c\
	  ft_putnbr.c\

OBJS = $(SRCS:%.c=%.o)
NAME = libftprintf.a
AR = ar rcs
CC = gcc
CFLAGS = -Wall -Wextra -Werror

CLEAN = rm -rf



${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

all: ${NAME}

#gcc -Wall -Werror -Wextra -c ft_isalnum.c -o ft_isalnum.o
$(OBJS): %.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	${CLEAN} ${OBJS}

fclean: clean
	${CLEAN} ${NAME}

re: fclean all

.PHONY : all clean fclean re