/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 20:35:05 by jaewkim           #+#    #+#             */
/*   Updated: 2020/10/31 21:29:09 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	return (nb * recursive_factorial(nb - 1));
}

int		ft_recursive_factorial(int nb)
{
	int result;

	if (nb < 0)
		return (0);
	result = recursive_factorial(nb);
	return (result);
}
