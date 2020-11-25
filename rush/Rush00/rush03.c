/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 15:14:44 by kachoi            #+#    #+#             */
/*   Updated: 2020/10/17 17:11:27 by kachoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);
void	get_location03(int a, int b, int i, int j);

void	rush03(int a, int b)
{
	int i;
	int j;

	i = 0;
	while (i < b)
	{
		j = 0;
		while (j < a)
		{
			get_location03(a, b, i, j);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	get_location03(int a, int b, int i, int j)
{
	if ((i == 0 || i == b - 1) && (j == 0))
	{
		ft_putchar('A');
	}
	else if ((i == 0 || i == b - 1) && (j == a - 1))
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
