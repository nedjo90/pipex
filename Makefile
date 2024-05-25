src=srcs/access.c\
srcs/execve.c\

CC=gcc
CFLAGS=-Wall -Wextra -Werror
INCLUDES=-I ./includes -I ./libft/includes
OBJ=$(SRCS:.c=.o)
AR=ar rcs
RM=rm -rf
PIP=pipex.a
NAME=pipex


all: $(NAME)

$(NAME) : $(OBJS)
	make -C ./libft
	mv libft/libft.a ./$(PIP)
	$(AR) $(PIP) $^
	$(CC) $(CFLAGS) pipex.c -o $(NAME) $(INCLUDES) $(PIP) -g

clean:
	make clean -C ./libft
	$(RM) $(OBJS)

fclean:
	make fclean -C ./libft
	$(RM) $(NAME) $(LIB)

re: fclean all

.PHONY: all clean fclean re