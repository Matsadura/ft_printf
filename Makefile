CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a
SRC = printf.c \
      put_modidcsu.c \
      put_pxX.c \
      specifier.c \
	  helpers.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re

.SECONDARY: $(OBJ)
