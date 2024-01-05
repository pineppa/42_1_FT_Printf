#ifndef LIBFT_H
# define LIBFT_H

# include <stdarg.h>

int ft_putchar(char c);
int ft_putstr(char *s);
int ft_putnbr(int n);
int ft_puthex(unsigned int nbr, int uppercase);
int ft_putpointer(void *p);

int	ft_printf(const char *str, ...);

#endif