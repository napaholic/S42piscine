/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 15:24:27 by jaewkim           #+#    #+#             */
/*   Updated: 2020/10/26 21:47:54 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned	int		len_chk(char *dst)
{
	int i;

	i = -1;
	while(dst[++i])
	;
	return (i);
}

unsigned	int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned	int		dstnum;
	unsigned	int		srcnum;
	int					i;
	int					j;

	dstnum = len_chk(dest);
	srcnum = len_chk(src);
	j = 0;
	while (j < size && dest[j])
	{
		write(1, &dest[j], 1);
		j++;
	}
	i = 0;
	while (i < srcnum && dstnum + i + 1 < size)
	{
		dest[dstnum + 1] = src[i];
		i++;
	}
	dest[dstnum + i] = '\0';
	return (j + srcnum);
}
int main ()
{
	unsigned int a;
	char *b = "asdf";
	char *c = "ewir";
	a = ft_strlcat(b, c, 5);
	printf("%d", a);
}
