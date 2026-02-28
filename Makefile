NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c \
	   ft_putchar.c \
	   ft_print_str.c \
	   ft_print_ptr.c \
	   ft_putnbr.c \
	   ft_putnbr_u.c \
	   ft_print_hex.c

OBJS = $(SRCS:.c=.o)

AR = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re