/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedribei <pedribei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:54:57 by pedribei          #+#    #+#             */
/*   Updated: 2023/10/05 11:33:13 by pedribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*cs;

	cs = (const unsigned char *)s;
	while (n > 0)
	{
		if (*cs == (unsigned char)c)
		{
			return ((void *)cs);
		}
		cs++;
		n--;
	}
	return (NULL);
}
