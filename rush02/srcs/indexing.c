/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycha <ycha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 20:54:35 by ycha              #+#    #+#             */
/*   Updated: 2020/11/01 21:22:54 by ycha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "indexing.h"
#include "data.h"
#include "file.h"
#include "string.h"

/*
** parse key and value
** Return : if error 0, if success 1
*/

int	parsing_key(char *start, char **key)
{
	char *ptr;
	char *end;

	if (!*start)
		return (0);
	ptr = start;
	while (*ptr)
	{
		if (*ptr == ' ')
			break ;
		if (!('0' <= *ptr && *ptr <= '9'))
			return (0);
		ptr++;
	}
	end = ptr;
	while (*ptr)
		if (*ptr != ' ')
			return (0);
	*end = '\0';
	if (!(*key = ft_strdup(start)))
		return (0);
	return (1);
}

int	parsing_value(char *start, char **value)
{
	while (*start == ' ')
		start++;
	if (*start == '\0')
		return (0);
	if (!(*value = ft_strdup(start)))
		return (0);
	return (1);
}

int	parsing(char *str, char **key, char **value)
{
	char	*start;

	start = str;
	if (*str == '\0')
	{
		*key = 0;
		*value = 0;
		return (1);
	}
	while (*str)
	{
		if (*str == ':')
		{
			*str = '\0';
			if (!parsing_key(start, key))
				return (0);
			if (!parsing_value(str + 1, value))
				return (0);
			return (1);
		}
		str++;
	}
	return (0);
}

int	indexing(char *file_name)
{
	int		error;
	int		fd;
	char	buf[BUFFSIZE];
	char	*key;
	char	*value;

	if ((fd = file_open(file_name)) == -1)
		return (0);
	while (1)
	{
		error = file_read_next_line(fd, buf);
		if (error == -1)
			break ;
		if (!parsing(buf, &key, &value) || !insert(key, value))
			error = -1;
		if (error == -1 || error == 0)
			break ;
	}
	if (file_close(fd) == -1)
		return (0);
	if (error == -1)
		return (0);
	return (1);
}
