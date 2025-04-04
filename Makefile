# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfilipe- <tfilipe-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/18 11:42:53 by tfilipe-          #+#    #+#              #
#    Updated: 2025/04/04 15:54:37 by tfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I.
SRCS = ft_atoi.c ft_isalpha.c 
OBJS = $(SRCS:.c=.o)
RM = rm -f
AR = ar rcs

all: $(NAME)

$(NAME):  $(OBJS)
	$(AR) $(NAME) $(OBJS)
	@echo "Libft successfully compiled"
	
%.o: %.c 
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	@echo "clean Objects removed"

fclean: clean
	$(RM) $(NAME)
	@echo "fclean Archive removed"

re: fclean all


.PHONY: all clean fclean re