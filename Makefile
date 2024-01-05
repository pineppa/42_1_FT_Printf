
ROOT_DIR = $(shell pwd)

SRCS	= ft_printf.c ft_putstrs.c ft_putnbrs.c

SRC_FILES = $(addprefix $(ROOT_DIR)/srcs/, $(SRCS))

HS = libft.h

H_FILES = $(addprefix $(ROOT_DIR)/includes/, $(HS))

HS_DIR = $(ROOT_DIR)/includes/

O_FILES = $(SRC_FILES:.c=.o)

NAME = libftprintf.a

C_FLAGS = -Wall -Wextra -Werror 

OUT_DIR = $(ROOT_DIR)

all : $(NAME)

.c.o:
	gcc ${C_FLAGS} -c -I ${HS_DIR} $< -o ${<:.c=.o}

$(NAME) : $(O_FILES)
	ar -cr $(NAME) $(O_FILES)

clean :
	rm -f $(O_FILES) $(O_BONUS)

fclean : clean
	rm -f $(NAME)

test : 
	gcc ./srcs/* ./tests/main.c ./includes/libft.h 
	
re : fclean all

.PHONY: all clean fclean re
