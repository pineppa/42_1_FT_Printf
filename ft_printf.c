/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jacopo.sala@student.barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 10:16:56 by jsala             #+#    #+#             */
/*   Updated: 2024/01/02 10:55:13 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"


void	print_case(char c, va_list ap)
{
	if (c == 'c')
		ft_putchar(va_arg(ap, char));
	if (c == 's')
		ft_putstr(va_arg(ap, char *));
	if (c == 'p')
		ft_putpointer(va_arg(ap, void *));
	if (c == 'd' || c == 'i' || c == 'u')
		ft_putnbr(va_arg(ap, int));
	if (c == 'x' || c == 'X' )
		ft_puthex(va_arg(ap, int));

}

void	print_specialcase(char c, va_list ap)
{
	if (c == '-')
		;
	if (c == 'O')
		;
	if (c == '.')
		;
	if (c == ' ')
		;
	if (c == '#')
		;
	if (c == '+')
		;
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	char	*text;
	int		i;
	int		print_count;

	va_start(ap, str);
	i = 0;
	print_count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_print_case(str[++i], ap);
			print_count += count_printed(str[i], print_count);
			i++;
			continue;
		}
		write(1, &str[i], 1);
		i++;
		print_count++;
	}
	va_end(ap);
	return (print_count);
}
