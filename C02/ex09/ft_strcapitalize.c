/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 22:58:00 by jaewkim           #+#    #+#             */
/*   Updated: 2020/10/22 06:40:40 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		alphanumeric(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	if ('a' <= c && c <= 'z')
		return (1);
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int		firstchk(char *str, int idx)
{
	if (idx == 0)
		return (1);
	return (!alphanumeric(str[idx - 1]));
}

void	lowtoup(char *str, int idx)
{
	if ('a' <= str[idx] && str[idx] <= 'z')
	{
		str[idx] -= 32;
	}
}

void	uptolow(char *str, int idx)
{
	if ('A' <= str[idx] && str[idx] <= 'Z')
	{
		str[idx] += 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (firstchk(str, i))
			lowtoup(str, i);
		else
			uptolow(str, i);
		i++;
	}
	return (str);
}
