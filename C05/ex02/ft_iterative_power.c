/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:31:03 by jaewkim           #+#    #+#             */
/*   Updated: 2020/10/31 22:02:05 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power < 0)
		return (0);
	while (power > -1)
	{
		if (power == 0)
			nb = 1;
		result = nb * result;
		power--;
	}
	return (result);
}
