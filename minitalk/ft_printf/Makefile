# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nivachir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 11:06:43 by nivachir          #+#    #+#              #
#    Updated: 2023/11/10 12:46:25 by nivachir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Name of the program
NAME = printf.a

# compiler
CC = cc

#flags
CFLAGS = -Wextra -Werror -Wall

#included file
#partI
SRC =	ft_printf.c ft_printout_int.c ft_printout_char.c ft_printout_str.c \
		ft_printout_uint.c ft_printout_hex.c ft_printout_hex.c ft_sidefunc.c \
		ft_strlen.c ft_calloc.c ft_bzero.c ft_memset.c

#make into OBJ file
OBJ = $(SRC:.c=.o)
	
#make all
all : $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

