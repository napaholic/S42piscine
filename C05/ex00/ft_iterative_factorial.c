/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 20:10:05 by jaewkim           #+#    #+#             */
/*   Updated: 2020/10/31 20:34:37 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int result;

	result = 1;
	i = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i > 0)
	{
		result = i * result;
		i--;
	}
	return (result);
}
