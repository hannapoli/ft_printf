# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/19 17:08:55 by hpolishc          #+#    #+#              #
#    Updated: 2025/01/14 11:24:46 by hpolishc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_printf.c \
		ft_put_char.c ft_put_str.c ft_put_ptr.c \
		ft_put_di.c ft_put_unsigned.c ft_put_hex.c

OBJS = $(SRCS:.c=.o)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re: 	fclean $(NAME)

.PHONY: all clean fclean re 