/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 17:45:16 by mjay              #+#    #+#             */
/*   Updated: 2020/10/26 02:50:59 by mjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
char	*ft_strcat(char *dest, char *src)
{
	char *tmp;

	tmp = dest;
	while(*tmp)
		tmp++;
	while(*src)
	{
		*tmp = *src;
		tmp++;
		src++;
	}
	*tmp = '\0';
	return (tmp);
}

int main()
{
	char *p;
	char *a = "asdf";
	char *b = "world";
	p = ft_strcat(a, b);
	while(*p)
	{
		write(1, &*p, 1);
		p++;
	}
	return 0;
}
