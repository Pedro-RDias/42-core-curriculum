NAME=libftprintf.a

CC=cc
CFLAGS=-Wall -Wextra -Werror

AR=ar
ARFLAGS=rcs

RM=rm
RMFLAGS=-f

SRC = ft_printf.c \
	ft_print_str.c \
	ft_print_nbr.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $^

clean:
	$(RM) $(RMFLAGS) $(OBJ)

fclean: clean
	$(RM) $(RMFLAGS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
