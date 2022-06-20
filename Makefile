# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/20 14:31:59 by lwilliam          #+#    #+#              #
#    Updated: 2022/06/20 15:05:18 by lwilliam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

SRCS = *.c

OBJS = $(SRCS:.c=.o)

FLAGS = -Werror -Wextra -Wall

$(NAME):
	gcc $(FLAGS) -c $(SRCS)
	ar rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all