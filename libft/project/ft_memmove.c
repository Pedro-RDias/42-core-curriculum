/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedribei <pedribei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:13:30 by pedribei          #+#    #+#             */
/*   Updated: 2023/10/07 07:31:12 by pedribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*csrc;
	char		*cdest;

	if (src == dest)
	{
		return (dest);
	}
	if (src > dest)
	{
		return (ft_memcpy(dest, src, n));
	}
	csrc = (const char *)src + n - 1;
	cdest = (char *)dest + n - 1;
	while (n)
	{
		*cdest-- = *csrc--;
		n--;
	}
	return (dest);
}
