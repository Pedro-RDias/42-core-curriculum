/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedribei <pedribei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:35:14 by pedribei          #+#    #+#             */
/*   Updated: 2023/11/02 09:27:42 by pedribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./project/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	res1;
	int	res2;

	res1 = printf("printf: %p %p\n", NULL, NULL);
	res2 = ft_printf("printf: %p %p\n", NULL, NULL);
	printf("res1: %d\n", res1);
	printf("res2: %d\n", res2);
	return (0);
}
