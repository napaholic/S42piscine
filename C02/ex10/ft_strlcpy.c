/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 00:19:41 by jaewkim           #+#    #+#             */
/*   Updated: 2020/10/22 01:15:06 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

unsigned	int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = ft_strlen(str);
	if (i + 1 < size)
	{
		j = -1;
		while (++j < i + 1)
			dest[j] = src[j];
	}
	else if (size)
	{
		j = -1;
		while (++j < size - 1)
			dest[j] = src[j];
		dest[j] = '\0';
	}
	return (i);
}
