NAME := libft.a
CC := clang
HEADERFILES := libft.h
SRCFILES := ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c\
			ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c\
			ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c
#     ft_calloc.c ft_strdup.c 
OBJFILES := $(SRCFILES:.c=.o)
LDFLAGS ?=
CFLAGS ?= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJFILES)
	ar rcs $(NAME) $(OBJFILES)

%.o: ft_%.c $(HEADERFILES)
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

.PHONY: all, clean, fclear, re

#https://noahloomans.com/tutorials/makefile/