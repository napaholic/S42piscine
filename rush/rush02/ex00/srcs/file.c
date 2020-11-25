/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycha <ycha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 20:20:48 by ycha              #+#    #+#             */
/*   Updated: 2020/11/01 23:24:10 by ycha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int	file_open(char *file_name)
{
	return (open(file_name, O_RDONLY));
}

int	file_read_next_line(int fd, char *buf)
{
	int nr;
	int len;

	len = BUFFSIZE;
	while ((nr = read(fd, buf, 1)) != 0)
	{
		if (nr == -1)
			return (-1);
		if (*buf == '\n')
		{
			*buf = '\0';
			return (1);
		}
		if (!len--)
			return (-1);
		++buf;
	}
	*buf = '\0';
	return (0);
}

int	file_close(int fd)
{
	return (close(fd));
}
