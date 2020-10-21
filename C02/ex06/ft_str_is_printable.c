/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 22:43:22 by jaewkim           #+#    #+#             */
/*   Updated: 2020/10/21 22:54:13 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			return (1);
	}
	return (0);
}