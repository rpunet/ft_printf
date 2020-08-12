# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/05 21:22:26 by rpunet            #+#    #+#              #
#    Updated: 2020/08/12 19:51:37 by rpunet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CFLAGS	= -Wall -Wextra -Werror
CC		= gcc
NORME	= norminette -R CheckForbiddenSourceHeader
HDIR	= -I .
SRCS	= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strcpy.c ft_strclr.c ft_strnew.c
SRCS2	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS	= $(SRCS:.c=.o)
OBJS2	= $(SRCS2:.c=.o)

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -c $(SRCS) $(HDIR)
	@ar rcs $(NAME) $(OBJS)
	@echo "\033[1;32m ---- libft.a done! ---- \033[0m"

norme: $(NORME) $(SRCS) $(SRCS2)



clean:
	@rm -f $(OBJS) $(OBJS2)
	@echo "\033[1;31m ---- objects removed! ---- \033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[1;31m ---- all cleared! ---- \033[0m"

re: fclean all

bonus:
	$(CC) $(CFLAGS) -c $(SRCS) $(SRCS2) $(HDIR)
	ar rcs $(NAME) $(OBJS) $(OBJS2)

.PHONY: all clean fclean re bonus
