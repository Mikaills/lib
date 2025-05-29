# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/26 16:24:29 by bahkaya           #+#    #+#              #
#    Updated: 2025/05/29 15:08:34 by bahkaya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
P = program

SOURCE = ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_tolower.c \
			ft_isalnum.c \
			ft_strchr.c \
			ft_toupper.c 


OBJECTS = $(SOURCE:.c=.o)



all: $(NAME) clean
$(NAME): $(OBJECTS)
	ar rc -o $(NAME) $(OBJECTS)


#cc: 
#	$(CC) $(CFLAGS) -o $(P) main.c $(NAME)
#run:
#	./$(P)

	
clean:
	rm -rf $(OBJECTS)

fclean:	clean
	rm -rf $(NAME)


re: fclean all

#pclean: $(P)
# rm -rf $(P)

.PHONY: all clean fclean re