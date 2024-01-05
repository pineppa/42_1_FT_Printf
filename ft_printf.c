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

#include "libft.h"

int	ft_print_basecase(char c, va_list ap)
{
	if (c == 'c')
		return (ft_putchar(va_arg(ap, char)));
	else if (c == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (c == 'p')
		return (ft_putpointer(va_arg(ap, void *)));
	else if (c == 'd' || c == 'i' || c == 'u')
		return (ft_putnbr(va_arg(ap, int)));
	else if (c == 'x' || c =='X')
		return (ft_puthex(va_arg(ap, unsigned int), c));
}

int	ft_print_specialcase(char c, va_list ap)
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
			print_count += ft_print_basecase(str[++i], ap);
			print_count += ft_print_specialcase(str[i], ap);
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
