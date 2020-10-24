/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 22:10:34 by jaewkim           #+#    #+#             */
/*   Updated: 2020/10/24 20:04:15 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_notalpha(char c)
{
	if ('a' <= c && c <= 'z')
		return (0);
	if ('A' <= c && c <= 'Z')
		return (0);
	return (1);
}

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (is_notalpha(str[i]))
			return (0);
	}
	return (1);
}
