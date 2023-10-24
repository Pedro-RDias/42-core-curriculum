/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedribei <pedribei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:07:00 by pedribei          #+#    #+#             */
/*   Updated: 2023/10/07 08:27:33 by pedribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if ((!s1 && !s2) || !n)
	{
		return (0);
	}
	while (--n && (unsigned char)*s1 == (unsigned char)*s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2)
	{
		return ((int)((unsigned char)*s1 - (unsigned char)*s2));
	}
	return (0);
}
