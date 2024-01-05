/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jacopo.sala@student.barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 20:28:59 by jsala             #+#    #+#             */
/*   Updated: 2024/01/05 16:49:09 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_putnbr(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
		return (ft_putstr("-2147483648"));
	else
	{
		if (nb < 0)
		{
			count += ft_putchar('-');
			nb = -nb;
		}
		if (nb >= 10)
		{
			count += ft_putnbr(nb / 10);
			nb = nb % 10;
		}
		if (nb < 10)
			count += ft_putchar(nb + '0');
		return (count);
	}
}

int	ft_putunbr(int n)
{
	unsigned int	nb;
	int				count;

	count = 0;
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

int	ft_puthex(unsigned long int nbr, char x)
{
	int	count;

	count = 0;
	if (nbr >= 16)
	{
		count += ft_puthex(nbr / 16, x);
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
	return (count);
}

int	ft_putpointer(void *p)
{
	unsigned long int	i;
	unsigned int		count;

	if (!p)
		return (ft_putstr("(nil)"));
	i = (unsigned long int)p;
	count = ft_putstr("0x") + ft_puthex(i, 'x');
	return (count);
}
