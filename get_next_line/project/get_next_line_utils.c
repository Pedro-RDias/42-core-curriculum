/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedribei <pedribei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:18:00 by pedribei          #+#    #+#             */
/*   Updated: 2023/10/23 12:44:18 by pedribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (unsigned char)c)
	{
		s++;
	}
	if (*s == (unsigned char)c)
	{
		return ((char *)s);
	}
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_s;
	size_t	s1len;
	size_t	s2len;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	joined_s = (char *)malloc((s1len + s2len + 1) * sizeof(char));
	if (!joined_s)
		return (NULL);
	i = 0;
	while (i < s1len)
	{
		joined_s[i] = s1[i];
		i++;
	}
	while (i < s1len + s2len)
	{
		joined_s[i] = s2[i - s1len];
		i++;
	}
	joined_s[i] = '\0';
	return (joined_s);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strjoin("", ""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	sub_s = (char *)malloc((len + 1) * sizeof(char));
	if (!sub_s)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		sub_s[i] = s[start + i];
		i++;
	}
	sub_s[i] = '\0';
	return (sub_s);
}

void	*ft_free(char **ptr)
{
	if (ptr != NULL)
	{
		if (*ptr != NULL)
		{
			free(*ptr);
			*ptr = NULL;
		}
	}
	return (NULL);
}
