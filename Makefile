SRCS = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putnbr_hex.c ft_put_address.c ft_put_unsigned.c
NAME= libftprintf.a
OBJS= ${SRCS:%.c=%.o}
FLAGS= -Wall -Werror -Wextra
CC = cc

all:${NAME}

${NAME}:${OBJS}
	ar r $(NAME) $(OBJS)

%.o: %.c ${NAME}
	${CC} ${FLAGS} -c $<

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: fclean clean