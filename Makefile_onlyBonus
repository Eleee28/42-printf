# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 16:21:38 by ibeltran          #+#    #+#              #
#    Updated: 2024/01/23 10:11:15 by ejuarros         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= ft_printf.c \
		  ft_flags.c \
		  ft_putargs.c \
		  ft_putchar.c \
		  ft_putnbr.c \
		  ft_puthex.c \
		  ft_putptr.c \
		  ft_putstr.c \
		  ft_putunsig.c \
		  ft_utils.c

OBJS	= $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar -crs $(NAME) $(OBJS)

all: $(NAME)

bonus: all

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all bonus clean fclean
