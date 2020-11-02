/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycha <ycha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 20:57:58 by ycha              #+#    #+#             */
/*   Updated: 2020/11/01 21:02:34 by ycha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "memory.h"
#include <unistd.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	char	*temp;
	char	*ret;

	temp = src;
	while (*temp)
		++temp;
	if (!(copy = (char *)ft_malloc((unsigned int)(temp - src) + 1)))
		return (0);
	ret = copy;
	while ((*copy++ = *src++))
		;
	*copy = '\0';
	return (ret);
}

int		ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1 || *s2))
	{
		++s1;
		++s2;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar(8 + 48);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar(nb % 10 + 48);
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
