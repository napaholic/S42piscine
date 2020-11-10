/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 21:40:59 by mjay              #+#    #+#             */
/*   Updated: 2020/11/06 01:41:11 by mjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
int		is_space(char c)
{
	return (c == '\t' || c == ' ' || c == '\n' || c == '\r' || c == '\v' || c == '\f');
}

int		count(char *str)
{
	int		i;
	int		cnt;

	cnt = 0;
	i = 0;
	while (str[i])
	{
		while (is_space(str[i]) && str[i])
			i++;
		if (!is_space(str[i]) && str[i])
		{
			cnt++;
			while (!is_space(str[i]) && str[i])
				i++;
		}
		i++;
	}
	cnt++;
	return (cnt);
}

char	*fillmalloc(char *str)
{
	int i;
	char *word;

	i = 0;
	while (str[i] && !is_space(str[i]))
		i++;
	if (!(word = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (str[i] && !is_space(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char **result;
	int i;

	i = 0;
	if (!(result = (char **)malloc(sizeof(char *) * count(str))))
		return (NULL);
	while (*str)
	{
		while (*str && is_space(*str))
			str++;
		if (*str && !is_space(*str))
		{
			result[i] = fillmalloc(str);
			i++;
			while (*str && !is_space(*str))
				str++;
		}
	}
	result[i] = NULL;
	return (result);
}

int main(int ac, char **av)
{
	char **c;

	c = ft_split(av[1]);
	while(*c)
	{
		while(**c)
		{
			write(1, &**c, 1);
			(*c)++;
		}
		write(1, "\n", 1);
		c++;
	}
	return 0;
}
