# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/16 18:07:10 by rpunet            #+#    #+#              #
#    Updated: 2020/08/12 19:51:14 by rpunet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
LIBFT	= libft.a
LIB_DIR	= libft/
CFLAGS	= -Wall -Wextra -Werror
CC		= gcc
SRCS	= ft_printf.c ft_tracker.c flags.c ft_print_int.c ft_print_char.c ft_print_str.c ft_print_ptr.c ft_print_udec_int.c ft_print_hex.c ft_printf_utils.c
OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	@make -C $(LIB_DIR)
	@cp $(LIB_DIR)$(LIBFT) ./$(NAME)
	@$(CC) $(CFLAGS) -c $(SRCS)

	@ar rcs $(NAME) $(OBJS)
	@echo "\033[1;32m ---- libftprint.a done! ---- \033[0m"


clean:
	@rm -f $(OBJS)
	@make clean -C $(LIB_DIR)
	@echo "\033[1;31m ---- objects removed! ---- \033[0m"

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIB_DIR)
	@echo "\033[1;31m ---- all cleared! ---- \033[0m"

re: fclean all

.PHONY: all clean fclean
