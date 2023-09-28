# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 14:56:45 by seckhard          #+#    #+#              #
#    Updated: 2023/09/28 17:17:03 by seckhard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile
SOURCES = \
					ft.printf.c ft_putchar.c ft_putchar_fd.c \
			
			
OBJECTS = $(SOURCES:.c=.o)

BONUS = 

BONUS_OBJECTS = $(BONUS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

LIBFTNAME = libft.all

LIBFTDIR = ./libft

all: $(NAME)

$(NAME): $(OBJECTS)
			$(AR) -r $@ $?

%.o: %.c
		$(CC) -c $(CFLAGS) $?

clean:
			rm -f $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
			rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
