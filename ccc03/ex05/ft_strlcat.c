/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 15:24:27 by jaewkim           #+#    #+#             */
/*   Updated: 2020/10/28 21:04:04 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
unsigned	int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && i + j + 1 < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	while (src[j] != '\0')
		j++;
	if (i > size)
		return (size + j);
	else
		return (i + j);
}

int main(){
	unsigned int a;
	unsigned int b;
	char s1[] = "aaaa";
	char s2[] = "bbb";
	char *al = s1;
	char *bl = s2;
	char s3[] = "aaaa";
	char s4[] = "bbb";
	char *al1 = s3;
	char *bl1 = s4;
	a = ft_strlcat(al, bl, 6);
	b = strlcat(al1, bl1, 6);

	printf("%u\n", a);
	printf("%u\n", b);
	return 0;
}
