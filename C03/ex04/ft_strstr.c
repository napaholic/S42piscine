/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 10:21:47 by jaewkim           #+#    #+#             */
/*   Updated: 2020/10/26 12:20:10 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = -1;
	while (str[++i])
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (1)
			{
				if (to_find[j] == '\0')
					return (&str[i]);
				if (str[i + j] != to_find[j])
					break;
				j++;
			}
		}
		i++;
	}
	return (0);
}

int main() {
	char *b;
	char *st = "i'm a dogpig";
	char *pig = "pig";
	b = ft_strstr(st, pig);
	while (*b)
	{
		write(1, &*b, 1);
		b++;
	}
}
