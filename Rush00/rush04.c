/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 15:15:23 by kachoi            #+#    #+#             */
/*   Updated: 2020/10/17 17:08:38 by kachoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);
void	get_location04(int a, int b, int i, int j);

void	rush04(int a, int b)
{
	int i;
	int j;

	i = 0;
	while (i < b)
	{
		j = 0;
		while (j < a)
		{
			get_location04(a, b, i, j);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	get_location04(int a, int b, int i, int j)
{
	if ((i == 0 && j == 0) || (i == b - 1 && j == a - 1))
	{
		ft_putchar('A');
	}
	else if ((i == 0 && j == a - 1) || (i == b - 1 && j == 0))
	{
		ft_putchar('C');
	}
	else if ((i == 0 || i == b - 1) || (j == 0 || j == a - 1))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}
