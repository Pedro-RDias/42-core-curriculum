/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedribei <pedribei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:35:14 by pedribei          #+#    #+#             */
/*   Updated: 2023/11/01 19:27:10 by pedribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./project/ft_printf.h"
#include <stdio.h>

void	print_resul(int original, int main)
{
	printf("\n*****************************\n");
	printf("Original: %d ", original);
	printf("Main: %d ", main);
	if (original == main)
		printf("OK\n");
	else
		printf("KO\n");
	printf("*****************************\n\n\n");
}

void	test_char(void)
{
	int	original;
	int	main;

	original = printf("Original: %c\n", 'a');
	main = ft_printf("Main: %c\n", 'a');
	print_resul(original, main);
	original = printf("Original: %c\n", '0');
	main = ft_printf("Main: %c\n", '0');
	print_resul(original, main);
	original = printf("Original: %c\n", '9');
	main = ft_printf("Main: %c\n", '9');
	print_resul(original, main);
	original = printf("Original: %c\n", ' ');
	main = ft_printf("Main: %c\n", ' ');
	print_resul(original, main);
	original = printf("Original: %c\n", '\n');
	main = ft_printf("Main: %c\n", '\n');
	print_resul(original, main);
	original = printf("Original: %c\n", '\t');
	main = ft_printf("Main: %c\n", '\t');
	print_resul(original, main);
	original = printf("Original: %c\n", '\v');
	main = ft_printf("Main: %c\n", '\v');
	print_resul(original, main);
	original = printf("Original: %c\n", '\b');
}

int	main(void)
{
	test_char();
	return (0);
}
