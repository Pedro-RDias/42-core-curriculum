/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedribei <pedribei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:24:09 by pedribei          #+#    #+#             */
/*   Updated: 2023/10/07 08:10:56 by pedribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*dst_p;
	size_t	dst_len;
	size_t	src_len;

	if (!dst && !src)
		return (0);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (src_len + size);
	dst_p = dst + dst_len;
	size -= dst_len;
	while (--size && *src)
	{
		*dst_p++ = *src++;
	}
	*dst_p = '\0';
	return (dst_len + src_len);
}
