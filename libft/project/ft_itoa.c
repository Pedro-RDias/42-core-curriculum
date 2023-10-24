/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedribei <pedribei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:58:39 by pedribei          #+#    #+#             */
/*   Updated: 2023/10/09 10:33:08 by pedribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_calc_int_size(int n)
{
	int	size;

	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	size = 0;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n > 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*num_s;
	size_t	size;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	size = ft_calc_int_size(n);
	num_s = (char *)ft_calloc(size + 1, sizeof(char));
	if (!num_s)
		return (NULL);
	num_s[size] = '\0';
	if (n < 0)
	{
		num_s[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		num_s[size - 1] = (n % 10) + '0';
		n /= 10;
		size--;
	}
	return (num_s);
}
