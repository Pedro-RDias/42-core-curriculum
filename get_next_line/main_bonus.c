/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedribei <pedribei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:00:20 by pedribei          #+#    #+#             */
/*   Updated: 2023/10/23 18:11:15 by pedribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./project/get_next_line_bonus.h"
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

int	main(int argc, char **argv)
{
	int		fd;
	int		fd2;
	char	*line;

	if (argc != 3)
	{
		printf("Missing file\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	while ((line = get_next_line(fd)))
	{
		printf("%s\n", line);
		free(line);
		fd2 = open(argv[2], O_RDONLY);
		while ((line = get_next_line(fd2)))
		{
			printf("%s\n", line);
			free(line);
		}
		close(fd2);
	}
	close(fd);
	return (0);
}
