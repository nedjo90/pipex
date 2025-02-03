SRCS=\
pipex.c\
srcs/utils.c\
srcs/error_handling.c\
srcs/search_path.c\
srcs/execute_cmd.c\
srcs/process.c\

CC=gcc
CFLAGS=-Wall -Wextra -Werror -I ./includes -I ./libft/includes
INCLUDES=
OBJS=$(SRCS:.c=.o)
AR=ar rcs
RM=rm -rf
NAME=pipex
MEMCHECK=


all: $(NAME)

$(NAME) : $(OBJS)
	make -C ./libft
	$(CC) $^ $(CFLAGS) -L./libft -lft -o $(NAME) -g3

clean:
	make clean -C ./libft
	$(RM) $(OBJS)

fclean: clean
	make fclean -C ./libft
	$(RM) $(NAME) $(LIB)

re: fclean all

.PHONY: all clean fclean re
