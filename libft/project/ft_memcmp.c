/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedribei <pedribei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:08:42 by pedribei          #+#    #+#             */
/*   Updated: 2023/10/05 15:12:14 by pedribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*cs1;
	const char	*cs2;

	cs1 = (const char *)s1;
	cs2 = (const char *)s2;
	while (n > 0)
	{
		if (*cs1 != *cs2)
		{
			return ((unsigned char)*cs1 - (unsigned char)*cs2);
		}
		cs1++;
		cs2++;
		n--;
	}
	return (0);
}
