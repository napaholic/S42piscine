/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 22:24:37 by jaewkim           #+#    #+#             */
/*   Updated: 2020/11/01 03:36:03 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_sqrt(int num)
{
	long long	i;
	long long	mok;

	i = 1;
	mok = 0;
	while (i * i < num)
		i++;
	return (i - 1);
}

int		ft_sqrt(int nb)
{
	int cmp;

	if (nb <= 0)
	{
		return (0);
	}
	cmp = is_sqrt(nb);
	if (cmp * cmp == nb)
		return (cmp);
	else
		return (0);
}
