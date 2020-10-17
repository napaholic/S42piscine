/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyepark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 14:33:18 by jiyepark          #+#    #+#             */
/*   Updated: 2020/10/17 23:37:08 by jiyepark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);
void	get_location01(int a, int b, int i, int j);

void	rush01(int a, int b)
{
	int i;
	int j;

	i = 0;
	while (i < b)
	{
		j = 0;
		while (j < a)
		{
			get_location01(a, b, i, j);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	get_location01(int a, int b, int i, int j)
{
	if ((i == 0 && j == 0) || (i == b - 1 && j == a - 1 && i != 0 && j != 0))
	{
		ft_putchar('/');
	}
	else if ((i == 0 && j == a - 1) || (i == b - 1 && j == 0))
	{
		ft_putchar('\\');
	}
	else if ((i == 0 || i == b - 1) || (j == 0 || j == a - 1))
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}
