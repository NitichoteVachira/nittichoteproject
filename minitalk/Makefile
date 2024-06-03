NAME = server
NAME_CLIENT = client

CC = cc

CFLAGS = -Wall -Werror -Wextra

CLIENT_SRCS = client.c
SERVER_SRCS = server.c

CLIENT_OBJS = $(CLIENT_SRCS:.c=.o)
SERVER_OBJS = $(SERVER_SRCS:.c=.o)

clean:
	rm -f $(NAME) $(NAME_CLIENT)
	rm -f $(LIBTF_DIR)libft.a
	$(MAKE) -C $(LIBTF_DIR) clean

fclean: clean
	$(MAKE) -C $(LIBTF_DIR) clean

re: fclean all

.PHONY: all clean fclean re
