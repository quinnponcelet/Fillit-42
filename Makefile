#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/05 13:16:08 by ckrommen          #+#    #+#              #
#    Updated: 2017/10/05 15:01:02 by ckrommen         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRCS = ft_newpiece.c ft_fill.c ft_create.c ft_countpiece.c ft_filetoarr.c ft_build.c

FLAGS = -Wall -Wextra -Werror

NAME = fillit

$(NAME):
	gcc $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all