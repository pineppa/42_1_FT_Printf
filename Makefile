# Directories & files

SRCS = ./srcs/ft_printf.c ./srcs/ft_putstrs.c ./srcs/ft_putnbrs.c
D_SRCS = ${SRCS:.c=.d}

HDIR = ./includes
HS = $(HDIR)/ft_printf.h

D_HS = ${HS:.c=.d}

# .o objects creation and definition
O_FILES = $(SRCS:.c=.o)

LIBFT = $(HDIR)/libft.a
# Variables and main commands
NAME = libftprintf.a
C_FLAGS = -Wall -Wextra -Werror
AR = ar crs
OUT_DIR = .

# Rules

all : $(NAME)

# -include $(D_SRCS) $(D_HS)

.c.o:
	gcc ${C_FLAGS} -c $< -I $(HDIR) -MMD -MP -o ${<:.c=.o}

$(NAME) : $(LIBFT) $(O_FILES)
	$(AR) $(NAME) $(O_FILES)

clean:
	rm -f $(O_FILES) $(D_SRCS)

fclean: clean
	rm -f $(NAME)

test: fclean
	gcc ./srcs/* ./tests/main.c
	make clean

re: fclean all

.PHONY: all clean fclean re
