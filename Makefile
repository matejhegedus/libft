NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
	ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
	ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
	ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
	ft_strrchr.c ft_tolower.c ft_toupper.c
OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC) libft.h
	ar r $(NAME) ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
	ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
	ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c libft.h

test.out: $(OBJ) test.o
	$(CC) $(CFLAGS) $(OBJ) test.o -o $@

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -vf $(OBJ) test.o test.out
fclean: clean
	rm -vf $(NAME)
re: fclean all

.PHONY=all clean fclean re