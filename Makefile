SRC =	main.c src/lst_utils.c src/solve3.c src/instructions/swap.c src/init.c \
		src/instructions/rotate.c src/instructions/rrotate.c src/instructions/push.c \

OBJ = $(SRC:%c=%o)

CC = gcc

# CFLAGS = -Wall -Werror -Wextra

NAME = push_swap

RM = rm -rf

MAKELIB = cd libft && make bonus -s

LIB = libft/libft.a

$(NAME): $(OBJ)
	$(MAKELIB)
	$(CC) $(OBJ) $(LIB) -o push_swap

all: $(NAME)

clean:
	$(RM) $(OBJ)
	cd libft && make clean -s

fclean: clean
	$(RM) $(NAME)
	cd libft && make fclean -s

re: fclean all