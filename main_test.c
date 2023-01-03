/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 11:29:12 by tstrassb          #+#    #+#             */
/*   Updated: 2023/01/02 11:45:00 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
    printf("   printf %%d: %d\n", 42);
    ft_printf("ft_printf %%d: %d\n", 42);
    printf("   printf %%s: %s\n", "hello, World!");
    ft_printf("ft_printf %%s: %s\n", "hello, World!");
    printf("   printf %%p: %p\n", "INT_MAX");
    ft_printf("ft_printf %%p: %p\n", "INT_MAX");
    printf("   printf %%i: %i\n", -42);
    ft_printf("ft_printf %%i: %i\n", -42);
    printf("   printf %%u: %u\n", INT_MIN);
    ft_printf("ft_printf %%u: %u\n", INT_MIN);
    printf("   printf %%x: %x\n", 99);
    ft_printf("ft_printf %%x: %x\n", 99);
    printf("   printf %%X: %X\n", 99);
    ft_printf("ft_printf %%X: %X\n", 99);
}
