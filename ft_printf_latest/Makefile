NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printchar.c ft_printstr.c ft_printp.c ft_printint.c \
	ft_printud.c ft_printhex.c ft_printf.c
OBJS = $(SRCS:.c=.o)
# BONUS_SRCS = 
# BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# bonus: $(OBJS) $(BONUS_OBJS)
# 	ar rc $(NAME) $(OBJS) $(BONUS_OBJS)