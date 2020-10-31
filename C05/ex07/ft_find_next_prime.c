/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 23:10:58 by jaewkim           #+#    #+#             */
/*   Updated: 2020/11/01 00:23:06 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_prime(int nb)
{
	int i;

	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb < 2)
		nb = 2;
	while (!is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
