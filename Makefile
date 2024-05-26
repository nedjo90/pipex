SRCS=\
pipex.c\
srcs/access/ft_access.c\
srcs/access/ft_is_existing_file.c\
srcs/access/ft_is_readable_file.c\
srcs/access/ft_is_writable_file.c\
srcs/access/ft_is_executable_file.c\
srcs/dup2/ft_dup2.c\
srcs/execve/ft_execve.c\


CC=gcc
CFLAGS=-Wall -Wextra -Werror -I ./includes -I ./libft/includes
INCLUDES=
OBJS=$(SRCS:.c=.o)
AR=ar rcs
RM=rm -rf
NAME=pipex


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