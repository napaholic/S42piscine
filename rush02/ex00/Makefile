CFLAGS = -Wall -Wextra -Wextra
NAME = rush-02
SRCDIR = srcs
INCDIR = includes
SRCS = ./srcs/data.c ./srcs/file.c ./srcs/hash.c ./srcs/indexing.c ./srcs/list.c ./srcs/main.c ./srcs/memory.c ./srcs/print.c ./srcs/print_insert_number.c ./srcs/print_list.c ./srcs/string.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)
%.o: %.c
	gcc $(CFLAGS) -c $< -o  $@ -I $(INCDIR)
$(NAME): $(OBJS)
	gcc $(CFLAGS) -o $@ $^
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

