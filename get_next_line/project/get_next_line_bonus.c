/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedribei <pedribei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:57:22 by pedribei          #+#    #+#             */
/*   Updated: 2023/10/23 18:01:55 by pedribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	ft_read_into(char **mem, int fd)
{
	ssize_t	bytes_read;
	char	*buffer;
	char	*temp;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return ;
	bytes_read = 1;
	while (mem != NULL && *mem && !ft_strchr(*mem, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			ft_free(mem);
			break ;
		}
		buffer[bytes_read] = '\0';
		temp = ft_strjoin(*mem, buffer);
		ft_free(mem);
		*mem = temp;
	}
	ft_free(&buffer);
}

char	*ft_extract_line(char **mem)
{
	size_t	i;
	char	*line;
	char	*temp;

	i = 0;
	while ((*mem)[i] && (*mem)[i] != '\n')
		i++;
	if (i == ft_strlen(*mem))
	{
		line = ft_substr(*mem, 0, i);
		ft_free(mem);
		return (line);
	}
	else
	{
		i++;
		line = ft_substr(*mem, 0, i);
		temp = ft_substr(*mem, i, ft_strlen(*mem) - i);
		ft_free(mem);
		*mem = temp;
	}
	if (!line)
		ft_free(mem);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*mem[FD_SIZE];

	if (fd < 0 || BUFFER_SIZE <= 0 || fd >= FD_SIZE)
		return (NULL);
	if (!mem[fd])
		mem[fd] = ft_strjoin("", "");
	ft_read_into(&mem[fd], fd);
	if (mem[fd] == NULL)
		return (NULL);
	if (!ft_strlen(mem[fd]))
	{
		ft_free(&mem[fd]);
		return (NULL);
	}
	return (ft_extract_line(&mem[fd]));
}
