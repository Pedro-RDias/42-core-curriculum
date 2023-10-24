/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedribei <pedribei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:16:59 by pedribei          #+#    #+#             */
/*   Updated: 2023/10/07 07:29:54 by pedribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (src == dst || size < 1)
		return (src_len);
	while (--size && *src)
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return (src_len);
}
