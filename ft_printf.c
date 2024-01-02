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

void	print_case(char c, va_list ap)
{

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
			print_case(str[++i], ap);
			i++;
			print_count += count_printed(str[i], print_count);
			continue;
		}
		write(1, &str[i], 1);
		i++;
		print_count++;
	}
}
