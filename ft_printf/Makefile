OUT = ft_printf.out

LIB = libftprintf.a
LIBDIR = ./project
# Commands
CC = cc
CFLAGS = -Wall -Wextra -Werror -g

RM=rm
RMFLAGS=-f

# files

SRC = main.c

# Rules

all: $(OUT)


$(OUT): $(SRC) $(LIBDIR)/$(LIB)
	$(CC) $(CFLAGS) -o $@ $^

$(LIBDIR)/$(LIB):
	make -C $(LIBDIR) CFLAGS="$(CFLAGS)"
	make -C $(LIBDIR) clean

clean:
	$(RM) $(RMFLAGS) $(OUT)
	make -C $(LIBDIR) clean

fclean: clean
	$(RM) $(RMFLAGS) $(LIBDIR)/$(LIB)

re: fclean all

.PHONY: all clean fclean re
