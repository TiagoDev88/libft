# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: foraa <foraa@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/18 11:42:53 by foraa             #+#    #+#              #
#    Updated: 2025/02/18 11:42:53 by foraa            ###   ########.fr        #
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