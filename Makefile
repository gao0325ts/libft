# must: $(NAME), all, clean, fclean, re
# bonus?

NAME =

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard  *.c)
OBJS = $(SRCS:.c=.o)
INCLUDES = ./libft.h

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS) $(INCLUDES)
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	make clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re