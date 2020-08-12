# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/16 18:07:10 by rpunet            #+#    #+#              #
#    Updated: 2020/08/12 17:15:18 by rpunet           ###   ########.fr        #
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
	make -C $(LIB_DIR)
	cp $(LIB_DIR)$(LIBFT) ./$(NAME)
	$(CC) $(CFLAGS) -c $(SRCS)

	ar rcs $(NAME) $(OBJS)
	@echo libftprint.a done!


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	@echo all cleared!

re: fclean all

.PHONY: all clean fclean
