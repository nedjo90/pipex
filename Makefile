SRCS=srcs/ft_access.c\
srcs/access_extensions/ft_is_existing_file.c\
srcs/access_extensions/ft_is_readable_file.c\
srcs/access_extensions/ft_is_writable_file.c\
srcs/access_extensions/ft_is_executable_file.c\


CC=gcc
CFLAGS=-Wall -Wextra -Werror
INCLUDES=-I ./includes -I ./libft/includes
OBJS=$(SRCS:.c=.o)
AR=ar rcs
RM=rm -rf
LIB=pipex.a
NAME=pipex


all: $(NAME)

$(NAME) : $(OBJS) curr
	make -C ./libft
	mv libft/libft.a $(LIB)
	$(AR) $(LIB) $^
	$(CC) $(CFLAGS) pipex.c -o $(NAME) $(INCLUDES) $(LIB) -g

clean:
	make clean -C ./libft
	$(RM) $(OBJS)

fclean:
	make fclean -C ./libft
	$(RM) $(NAME) $(LIB)

re: fclean all

.PHONY: all clean fclean re