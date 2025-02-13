/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jacopo.sala@student.barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 09:54:52 by jsala             #+#    #+#             */
/*   Updated: 2024/01/05 16:39:05 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int		num = -244;
	int		sum_print;
	int		sum_ftprint;
	char	*str = "Love you 2";
	void 	*p;

	p = str;
	printf("The following lines present the answer to the use of printf vs ft_printf\n\n");
	printf("-- printf --\t\tvs\t\t-- ft_printf --\n");

	printf("\x1B[37m\nTest #1.1: Positive values of int \x1B[34m%%i\x1B[37m\n");
	sum_print = printf("Expected: %i, %i, %i\n", 14, 203, INT_MAX);
	sum_ftprint = ft_printf("Obtained: %i, %i, %i\n", 14, 203, INT_MAX);
	if (sum_ftprint == sum_print)
		printf("\x1B[32mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);
	else
		printf("\x1B[31mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);
	
	printf("\x1B[37m\nTest #1.2: Negative values of int \x1B[34m%%i\x1B[37m\n");
	sum_print = printf("Expected: %i, %i, %i\n", -1, -20, INT_MIN);
	sum_ftprint = ft_printf("Obtained: %i, %i, %i\n", -1, -20, INT_MIN);
	if (sum_ftprint == sum_print)
		printf("\x1B[32mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);
	else
		printf("\x1B[31mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);
	
	printf("\x1B[37m\nTest #1.3: Zero value \x1B[34m%%i\x1B[37m\n");
	sum_print = printf("Expected: %i\n", 0);
	sum_ftprint = ft_printf("Obtained: %i\n", 0);
	if (sum_ftprint == sum_print)
		printf("\x1B[32mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);
	else
		printf("\x1B[31mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);
	
	printf("\x1B[37m\nTest #2.1: Positive values of digits \x1B[34m%%d\x1B[37m\n");
	sum_print = printf("Expected: %d, %d, %d\n", 14, 203, INT_MAX);
	sum_ftprint = ft_printf("Obtained: %d, %d, %d\n", 14, 203, INT_MAX);
	if (sum_ftprint == sum_print)
		printf("\x1B[32mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);
	else
		printf("\x1B[31mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);
	
	printf("\x1B[37m\nTest #2.2: Negative values of digits \x1B[34m%%d\x1B[37m\n");
	sum_print = printf("Expected: %d, %d, %d\n", -1, -20, INT_MIN);
	sum_ftprint = ft_printf("Obtained: %d, %d, %d\n", -1, -20, INT_MIN);
	if (sum_ftprint == sum_print)
		printf("\x1B[32mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);
	else
		printf("\x1B[31mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);
	
	printf("\x1B[37m\nTest #2.3: Zero value \x1B[34m%%d\x1B[37m\n");
	sum_print = printf("Expected: %d\n", 0);
	sum_ftprint = ft_printf("Obtained: %d\n", 0);
	if (sum_ftprint == sum_print)
		printf("\x1B[32mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);
	else
		printf("\x1B[31mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);
	
	printf("\x1B[37m\nTest #3.1: Random pointer \x1B[34m%%p\x1B[37m\n");
	sum_print = printf("Expected: %p\n", p);
	sum_ftprint = ft_printf("Obtained: %p\n", p);
	if (sum_ftprint == sum_print)
		printf("\x1B[32mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);
	else
		printf("\x1B[31mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);
	
	printf("\x1B[37m\nTest #3.2: NULL pointer \x1B[34m%%p\x1B[37m\n");
	sum_print = printf("Expected: %p\n", NULL);
	sum_ftprint = ft_printf("Obtained: %p\n", NULL);
	if (sum_ftprint == sum_print)
		printf("\x1B[32mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);
	else
		printf("\x1B[31mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);
	
	printf("\x1B[37m\nTest #4.1: Char \x1B[34m%%c\x1B[37m\n");
	sum_print = printf("Expected: %c, %c, %c, %c\n", 'a', 'J', '\t', '+');
	sum_ftprint = ft_printf("Obtained: %c, %c, %c, %c\n", 'a', 'J', '\t', '+');
	if (sum_ftprint == sum_print)
		printf("\x1B[32mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);
	else
		printf("\x1B[31mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);
	
	printf("\x1B[37m\nTest #4.2: Special char \x1B[34m%%c\x1B[37m\n");
	sum_print = printf("Expected: %c, %c\n", 200, '@');
	sum_ftprint = ft_printf("Obtained: %c, %c\n", 200, '@');
	if (sum_ftprint == sum_print)
		printf("\x1B[32mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);
	else
		printf("\x1B[31mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);
	
	printf("\x1B[37m\nTest #5: Strings of chars \x1B[34m%%s\x1B[37m\n");
	sum_print = printf("Expected: %s, %s, %s, %s\n", str, "", "0\t ", "Se#Ra");
	sum_ftprint = ft_printf("Obtained: %s, %s, %s, %s\n", str, "", "0\t ", "Se#Ra");
	if (sum_ftprint == sum_print)
		printf("\x1B[32mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);
	else
		printf("\x1B[31mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);

	printf("\x1B[37m\nTest #6: Hexadecimal lowercase \x1B[34m%%x\x1B[37m\n");
	sum_print = printf("Expected: %x, %x, %x, %x\n", 0, -1, 15, 244);
	sum_ftprint = ft_printf("Obtained: %x, %x, %x, %x\n", 0, -1, 15, 244);
	if (sum_ftprint == sum_print)
		printf("\x1B[32mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);
	else
		printf("\x1B[31mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);
	
	printf("\x1B[37m\nTest #7: Hexadecimal UPPERCASE \x1B[34m%%X\x1B[37m\n");
	sum_print = printf("Expected: %X, %X, %X, %X\n", 0, -1, 15, 244);
	sum_ftprint = ft_printf("Obtained: %X, %X, %X, %X\n", 0, -1, 15, 244);
	if (sum_ftprint == sum_print)
		printf("\x1B[32mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);
	else
		printf("\x1B[31mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);
	
	printf("\x1B[37m\nTest #8: Unsigned int \x1B[34m%%c\x1B[37m\n");
	sum_print = printf("Expected: %u, %u, %u\n", 200, -1, 0);
	sum_ftprint = ft_printf("Obtained: %u, %u, %u\n", 200, -1, 0);
	if (sum_ftprint == sum_print)
		printf("\x1B[32mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);
	else
		printf("\x1B[31mPartial return sum. Expected: %i, Obtained: %i\n", sum_print, sum_ftprint);

	printf("\x1B[37m\nBig structure coming:\n");
	sum_print = printf("Pointer: %p;\nThe num %% int is -%i and %u- and its digit is -%d-\nIts hexadecimal represantation in low is %x, and uppercase %X;\nThe string gives a char equal to %c, while its string is %s;\n\n", str, num, num, num, num, num, 'g', str);
	printf("Valore di output: %i\n", sum_print);
	printf("-- ft_printf --\n\n");
	sum_print = ft_printf("Pointer: %p;\nThe num %% int is -%i and %u- and its digit is -%d-\nIts hexadecimal represantation in low is %x, and uppercase %X;\nThe string gives a char equal to %c, while its string is %s;\n\n", str, num, num, num, num, num, 'g', str);
	printf("Valore di output: %i\n", sum_print);
	return (0);
}
