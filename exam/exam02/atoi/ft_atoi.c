/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 21:25:22 by mjay              #+#    #+#             */
/*   Updated: 2020/10/30 02:33:17 by mjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		spaceover(const char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == '\n'
				|| str[i] == '\t'
				|| str[i] == '\r'
				|| str[i] == '\v'
				|| str[i] == '\f'
				|| str[i] == ' ')
			i++;
		else
			break;
	}
	return i;
}

long long		ft_atoi(const char *str)
{
	int i;
	int num;
	long long result;
	i = spaceover(str);
	num = 1;
	result = 0;
	while(str[i])
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				num *= -1;
			i++;
		}
		else
			break;
	}
	while (str[i])
	{
		if ('0' <= str[i] && str[i] <= '9')
		{
			result *= 10;
			result += (str[i] - '0');
			i++;
		}
		else
			break;
	}
	//result *= num;
	return result;
}

int main()
{
	long long	a;
	char s[] = "  --23482423495";
	a = ft_atoi(s);
	printf("%lld", a);
}


