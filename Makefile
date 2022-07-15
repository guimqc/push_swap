SRC = main.c # src/

OBJ = $(SRC:%c=%o)

CC = gcc

# CFLAGS = -Wall -Werror -Wextra

NAME = push_swap

RM = rm -rf

MAKELIB = cd libft && make -s

LIB = libft/libft.a

$(NAME): $(OBJ)
	$(MAKELIB)
	$(CC) $(OBJ) $(LIB) -o push_swap

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all