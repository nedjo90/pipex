SRCS=\
pipex.c\
srcs/ft_perror_free_exit.c\
srcs/ft_get_path_envp.c\
srcs/ft_get_file_path.c\
srcs/ft_free_pipex.c\
srcs/ft_configure_pipex.c\
srcs/ft_initialize_pipex.c\
srcs/ft_proc_pipex.c\
srcs/ft_get_command_head.c\

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