/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:10:31 by jsala             #+#    #+#             */
/*   Updated: 2024/01/10 10:15:30 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putunbr(int n);
int	ft_puthex(unsigned int nbr, char x);
int	ft_putlonghex(unsigned long int nbr, char x);
int	ft_putpointer(void *p);

int	ft_printf(const char *str, ...);

#endif
