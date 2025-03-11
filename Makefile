# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/18 11:42:53 by tfilipe-          #+#    #+#              #
#    Updated: 2025/03/05 20:16:19 by tfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror -I.
SRCS = ft_atoi.c
OBJS = $(SRCS:.c=.o)
RM = rm -f
AR = ar
ARFLAGS = rcs

all: $(NAME)

$(NAME): $(OBJS)
    $(AR) $(ARFLAGS) $(NAME) $(OBJS)


clean:
	$(RM) $(OBJS)


fclean: clean
	$(RM) $(NAME)


re: fclean all


.PHONY: all clean fclean re