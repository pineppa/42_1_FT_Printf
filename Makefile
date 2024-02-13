# Directories & files

SRCS = ./srcs/ft_printf.c ./srcs/ft_putstrs.c ./srcs/ft_putnbrs.c
D_SRCS = ${SRCS:.c=.d}

HS = ./includes/ft_printf.h
D_HS = ${HS:.c=.d}

# .o objects creation and definition
O_FILES = $(SRCS:.c=.o)

# Variables and main commands

NAME = libftprintf.a
C_FLAGS = -Wall -Wextra -Werror
AR = ar crs
OUT_DIR = .

# Rules

all : $(NAME)

-include $(D_SRCS) $(D_HS)

.c.o:
	gcc ${C_FLAGS} -c $< -I $(HS) -MMD -MP -o ${<:.c=.o}

$(NAME) : libft $(O_FILES)
	$(AR) $(NAME) $(O_FILES)

clean :
	rm -f $(O_FILES) $(D_SRCS) $(D_HS)

fclean : clean
	rm -f $(NAME)

test : fclean
	gcc ./srcs/* ./includes/ft_printf.h ./tests/main.c
	make clean

re : fclean all

.PHONY: all clean fclean re
