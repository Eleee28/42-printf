# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 14:35:42 by elena             #+#    #+#              #
#    Updated: 2024/01/23 08:33:11 by ejuarros         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

BONUS_NAME = .bonus

MY_SOURCES = printf/ft_printf.c		printf/ft_putchar.c		printf/ft_puthex.c \
			 printf/ft_putnbr.c 	printf/ft_putptr.c 		printf/ft_putstr.c  \
			 printf/ft_putunsig.c 	printf/ft_count.c 		printf/ft_putargs.c  \
			 printf/ft_puthex_nbr.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)

# BONUS_SRC = printf_bonus/ft_printf_bonus.c		printf_bonus/ft_putchar_bonus.c	\
			printf_bonus/ft_puthex_bonus.c 		printf_bonus/ft_putnbr_bonus.c 	\
			printf_bonus/ft_putptr_bonus.c 		printf_bonus/ft_putstr_bonus.c  \
			printf_bonus/ft_putunsig_bonus.c 	printf_bonus/ft_count_bonus.c 	\
			printf_bonus/ft_putargs_bonus2.c  	printf_bonus/ft_flags.c			\
			printf_bonus/ft_puthex_nbr_bonus.c

# BONUS_SRC = printf_bonus/ft_flags.c			printf_bonus/ft_printf.c \
			printf_bonus/ft_putargs.c		printf_bonus/ft_putchar.c \
			printf_bonus/ft_puthex.c 		printf_bonus/ft_putnbr.c \
			printf_bonus/ft_putptr.c 		printf_bonus/ft_putstr.c \
			printf_bonus/ft_putunsig.c 		printf_bonus/utils.c

# BONUS_OBJ = $(BONUS_SRC:.c=.o)

REMOVE = rm -f

LIB = ar -crs

CC = cc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	$(LIB) $(NAME) $(MY_OBJECTS)

# bonus: $(BONUS_NAME)

# $(BONUS_NAME): $(MY_OBJECTS) $(BONUS_OBJ)
	$(LIB) $(NAME) $(MY_OBJECTS) $(BONUS_OBJ)
	$(LIB) $(BONUS_NAME) $(MY_OBJECTS) $(BONUS_OBJ)

clean:
	$(REMOVE) $(MY_OBJECTS) 


fclean: clean
	$(REMOVE) $(NAME) 

re: fclean all

.PHONY: all clean fclean re 
