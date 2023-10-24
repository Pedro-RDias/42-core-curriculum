/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedribei <pedribei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:27:59 by pedribei          #+#    #+#             */
/*   Updated: 2023/10/09 09:31:43 by pedribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_joined_size(char const *s1, char const *s2)
{
	int	joined_s_size;

	joined_s_size = ft_strlen(s1) + ft_strlen(s2);
	return (joined_s_size + 1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_s;

	if (!s1 || !s2)
		return (NULL);
	joined_s = (char *)ft_calloc(ft_joined_size(s1, s2), sizeof(char));
	if (!joined_s)
		return (NULL);
	ft_strlcpy(joined_s, s1, ft_strlen(s1) + 1);
	ft_strlcat(joined_s, s2, ft_joined_size(s1, s2));
	return (joined_s);
}
