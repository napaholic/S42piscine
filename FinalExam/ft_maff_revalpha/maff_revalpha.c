/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:22:25 by mjay              #+#    #+#             */
/*   Updated: 2020/11/03 20:26:59 by mjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int		main()
{
	char	c;
	c = 'z';
	while (c >= 'a')
	{
		if (c % 2 == 1)
		{
			c -= 32;
			write(1, &c, 1);
			c += 32;
		}
		else
			write(1, &c, 1);
		c--;
	}
}
