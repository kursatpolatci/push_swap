NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS = check_args.c linked_list_operators1.c linked_list_operators2.c \
		linked_list_operators3.c linked_list_operators4.c moves1.c  \
		moves2.c moves3.c push_swap.c sort_big.c sort_small.c utils1.c \
		utils2.c utils3.c

OBJC = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(SRCS)
	gcc -Wall -Wextra -Werror $(SRCS) -o $(NAME)

clean:
	$(RM) $(OBJC)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean clean re