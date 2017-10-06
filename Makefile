#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/05 13:16:08 by ckrommen          #+#    #+#              #
#    Updated: 2017/10/05 18:53:54 by qponcele         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRCS = ft_filetoarr.c

FLAGS = -Wall -Wextra -Werror

NAME = fillit

$(NAME):
	gcc $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
