/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 10:21:47 by jaewkim           #+#    #+#             */
/*   Updated: 2020/10/28 12:31:42 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned	int		i;
	unsigned	int		j;

	if (*to_find == '\0')
		return (str);
	i = 0;
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
					break ;
				j++;
			}
		}
	}
	return (0);
}
