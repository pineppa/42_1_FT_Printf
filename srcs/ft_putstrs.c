/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 20:28:59 by jsala             #+#    #+#             */
/*   Updated: 2024/01/05 09:06:58 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		write(1, &s[i], 1);
	return (i);
}

int	ft_putnbr(int n)
{
	unsigned int	nb;
	int				count;

	count = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		count++;
	}
	nb = (unsigned int) n;
	if (nb >= 10)
	{
		count += ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
		count++;
	}
	return (count);
}

int	ft_puthex(unsigned int nbr, char x)
{
	int count;

	count = 0;
	if (nbr >= 16)
	{
		ft_puthex(nbr / 16, x);
		nbr = nbr % 16;
	}
	if (nbr < 16)
	{
		if (x == 'x')
			ft_putchar("0123456789abcdef"[nbr]);
		else
			ft_putchar("0123456789ABCDEF"[nbr]);
		count++;
	}
}

int	ft_putpointer(void *p)
{
	return (ft_puthex((unsigned int)p, 0));
}