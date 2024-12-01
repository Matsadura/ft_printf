CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a
LIBFT = libft.a
SRC = printf.c \
      put_%idsu.c \
      put_pxX.c \
      specifier.c
OBJ = $(SRC:%.c=%.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C libft/

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm $(OBJ)
	make -C libft/ clean

fclean:
	rm -rf $(NAME) $(OBJ)
	make -C libft/ fclean

re: fclean all

.PHONY: all clean fclean re

.SECONDARY: $(OBJ)
