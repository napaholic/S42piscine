/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 02:51:30 by mjay              #+#    #+#             */
/*   Updated: 2020/10/28 20:05:00 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *tmpdest;
	char *tmpsrc;

	tmpdest = dest;
	tmpsrc = src;
	while (*tmpdest)
	{
		tmpdest++;
	}
	while (*tmpsrc && nb)
	{
		*tmpdest = *tmpsrc;
		tmpdest++;
		tmpsrc++;
		nb--;
	}
	*tmpdest = '\0';
	return (dest);
}
