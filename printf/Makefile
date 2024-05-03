# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artuda-s <artuda-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/30 17:39:57 by artuda-s          #+#    #+#              #
#    Updated: 2024/05/03 15:24:40 by artuda-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a 
SRCS = ft_printf.c ft_putchars.c ft_putnum_base.c ft_putptr.c
OBJS = $(SRCS:.c=.o)
CC = cc
FLAGS = -Wall -Werror -Wextra
DEPS = ft_printf.h
LIBFT = libft.a
LIBFT_PATH = ./libft/libft.a
LIBFT_DIR = ./libft
.SILENT :

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	mv $(LIBFT_PATH) .
	mv $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(DEPS)
	$(CC) $(FLAGS) -c $< -o $@

$(LIBFT):
	make --silent -C $(LIBFT_DIR)
	
clean:
	make clean -C $(LIBFT_DIR)
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean all