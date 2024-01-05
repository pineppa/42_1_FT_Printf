/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 09:54:52 by jsala             #+#    #+#             */
/*   Updated: 2024/01/05 09:54:52 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//int main(int argc, char **argv)
int main(void)
{
    int num = 23;
    char *str = "Love you 2";

    printf("The following lines present the answer to the use of printf vs ft_printf\n\n");
    printf("-- printf --\n\n");
    printf("The num int is -%i- and its digit is -%d-\nThe string gives a char equal to %c, while its string is %s;\n\n", num, num, str, str);
    printf("-- ft_printf --\n\n");
    ft_printf("The num int is -%i- and its digit is -%d-\nThe string gives a char equal to %c, while its string is %s;\n\n", num, num, str, str);
    return (0);
}
