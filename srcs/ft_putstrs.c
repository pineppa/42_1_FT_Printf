/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 20:28:59 by jsala             #+#    #+#             */
/*   Updated: 2024/01/04 21:03:46 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
}

void	ft_putnbr(int n)
{
	unsigned int	nb;

	if (nb < 0)
		ft_putchar('-');
	nb = (unsigned int) n;
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_putchar(nb + '0');
}

void	ft_puthex(unsigned int nbr, char x)
{
	if (nbr >= 16)
	{
		ft_puthex(nbr / 16, x);
		nbr = nbr % 16;
	}
	if (nbr < 16)
	{
		if (x)
			ft_putchar("0123456789abcdef"[nbr]);
		else
			ft_putchar("0123456789ABCDEF"[nbr]);
	}
}

void	ft_putpointer(void *p)
{
	ft_puthex((unsigned int)p, 0);
}