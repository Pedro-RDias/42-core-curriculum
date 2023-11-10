/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedribei <pedribei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:35:14 by pedribei          #+#    #+#             */
/*   Updated: 2023/11/02 10:36:13 by pedribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./project/ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	int	res1;
	int	res2;

	res1 = printf("printf: %p %p\n", NULL, NULL);
	res2 = ft_printf("printf: %p %p\n", NULL, NULL);
	printf("res1: %d\n", res1);
	printf("res2: %d\n", res2);
	res1 = printf("printf:    %x %X\n", INT_MIN, INT_MIN);
	res2 = ft_printf("ft_printf: %x %X\n", INT_MIN, INT_MIN);
	printf("res1: %d\n", res1);
	printf("res2: %d\n", res2);
	// res1 = printf("printf:       %d\n", LLONG_MIN);
	// res1 = ft_printf("ft_printf:    %d\n", LLONG_MIN);
	// printf("res1: %d\n", res1);
	// printf("res2: %d\n", res2);
	return (0);
}
