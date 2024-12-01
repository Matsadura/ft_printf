CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a
SRC = printf.c \
      put_%idsu.c \
      put_pxX.c \
      specifier.c \
	  helpers.c
OBJ = $(SRC:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm $(OBJ)

fclean:
	rm -rf $(NAME) $(OBJ)

re: fclean all

.PHONY: all clean fclean re

.SECONDARY: $(OBJ)
