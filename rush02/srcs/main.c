/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:30:59 by jaewkim           #+#    #+#             */
/*   Updated: 2020/11/01 22:00:35 by mjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "indexing.h"
#include "print.h"
#include "memory.h"
#include "string.h"
#include "hash.h"
#define TRUE 1
#define FALSE 0

int		is_space(char ch)
{
	return (ch == ' '
			|| ch == '\t'
			|| ch == '\n'
			|| ch == '\r'
			|| ch == '\v'
			|| ch == '\f');
}

int		is_numeric(char ch)
{
	return ('0' <= ch && ch <= '9');
}

int		isnumeric(char *str)
{
	char	*ptr;

	ptr = str;
	while (is_space(*ptr))
		++ptr;
	if (*ptr == '+')
		++ptr;
	while (*ptr == '0')
		++ptr;
	if (is_space(*ptr) || *ptr == '\0')
		*str++ = '0';
	while (is_numeric(*ptr))
		*str++ = *ptr++;
	if (is_space(*ptr))
		*str = '\0';
	while (is_space(*ptr))
		++ptr;
	if (*ptr)
		return (0);
	return (1);
}

void	name(char* dict_title, char* number)
{
	if (!indexing(dict_title))
	{
		ft_putstr("Dict Error\n");
		ft_free();
		return ;
	}
	if (!print(number))
	{
		ft_putstr("Dict Error\n");
		ft_free();
		return ;
	}
	ft_free();
}

int		main(int ac, char **av)
{
	char* dict_title;
	char* number;

	if (!ft_malloc_init() || !create_hash())
		ft_putstr("Error\n");
	else if (ac == 2 && isnumeric(av[1]))
	{
		dict_title = "numbers.dict";
		number = av[1];
	}
	else if (ac == 3 && isnumeric(av[2]))
	{
		dict_title = av[1];
		number = av[2];
	}
	else
		ft_putstr("Error\n");
	name(dict_title, number);
	return (0);
}
