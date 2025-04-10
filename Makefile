# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/18 11:42:53 by tfilipe-          #+#    #+#              #
#    Updated: 2025/04/10 14:49:40 by tfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I.

SRCS =  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 

OBJS = $(SRCS:%.c=%.o)

RM = rm -f
AR = ar
ARFLAGS = rcs

all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME):  $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	@echo "Libft successfully compiled"

clean:
	$(RM) $(OBJS)
	@echo "clean Objects removed"

fclean: clean
	$(RM) $(NAME)
	@echo "fclean Archive removed"

re: fclean all


.PHONY: all clean fclean re