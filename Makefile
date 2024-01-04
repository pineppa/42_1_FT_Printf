
ROOT_DIR = $(shell pwd)

SRCS	= ft_printf.c

SRC_FILES = $(addprefix $(ROOT_DIR)/, $(SRCS))

O_FILES = $(SRC_FILES:.c=.o)

NAME = libftprintf.a

C_FLAGS = -Wall -Wextra -Werror 

OUT_DIR = $(ROOT_DIR)

all : $(NAME)

.c.o:
	gcc ${C_FLAGS} -c -I ${ROOT_DIR} $< -o ${<:.c=.o}

$(NAME) : $(O_FILES)
	ar -cr $(NAME) $(O_FILES)

clean :
	rm -f $(O_FILES) $(O_BONUS)

fclean : clean
	rm -f $(NAME)
	
re : fclean all

.PHONY: all clean fclean re
