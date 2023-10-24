/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedribei <pedribei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:44:02 by pedribei          #+#    #+#             */
/*   Updated: 2023/10/11 15:26:46 by pedribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (words);
}

static void	*ft_free(char **splitted_s, size_t i)
{
	while (i--)
		free(splitted_s[i]);
	free(splitted_s);
	return (NULL);
}

static char	**ft_split_str(char const *s, char c, char **sp_s, size_t wc)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (i < wc)
	{
		while (*s && *s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		sp_s[i] = ft_substr(s, 0, len);
		if (!sp_s[i])
		{
			ft_free(sp_s, i);
			return (NULL);
		}
		s += len;
		i++;
	}
	sp_s[i] = NULL;
	return (sp_s);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	char	**splitted_s;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	splitted_s = (char **)ft_calloc(word_count + 1, sizeof(char *));
	if (!splitted_s)
		return (NULL);
	return (ft_split_str(s, c, splitted_s, word_count));
}
