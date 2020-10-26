/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 02:51:30 by mjay              #+#    #+#             */
/*   Updated: 2020/10/26 14:39:00 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *tmpDest = dest;
	char *tmpSrc = src;

	while (*tmpDest)
	{
		tmpDest++;
	}
	while (*tmpSrc && !nb)
	{
		*tmpDest++ = *tmpSrc++;
		nb--;
	}
	*tmpDest = '\0';
	return (dest);
 }
