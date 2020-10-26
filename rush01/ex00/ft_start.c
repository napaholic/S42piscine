/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungspar <sungspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 13:45:35 by jpyo              #+#    #+#             */
/*   Updated: 2020/10/25 02:55:25 by sungspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_char_to_int.h"
#include "rec_con.h"
#include <unistd.h>

void	print_grid(int **grid)
{
	int		i;
	int		j;
	char	temp;

	i = 1;
	j = 1;
	while (i < 5)
	{
		temp = grid[i][j++] + '0';
		write(1, &temp, 1);
		while (j < 5)
		{
			write(1, " ", 1);
			temp = grid[i][j] + '0';
			write(1, &temp, 1);
			j++;
		}
		write(1, "\n", 1);
		j = 1;
		i++;
	}
}

void	ft_inialize_zero(int **num)
{
	int i;
	int j;

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
			num[i][j++] = 0;
		i++;
	}
}

int		ft_start(char *str, int size)
{
	int **grid;
	int i;

	i = 0;
	grid = (int **)malloc(sizeof(int *) * ((size / 4) + 2));
	while (i < 6)
		grid[i++] = (int *)malloc(sizeof(int) * ((size / 4) + 2));
	ft_inialize_zero(grid);
	if (ft_char_to_int(str, grid))
	{
		while (--i >= 0)
			free(grid[i]);
		free(grid);
		return (-1);
	}
	if (rec_con(grid, 1, 1))
		return (-1);
	print_grid(grid);
	while (--i >= 0)
		free(grid[i]);
	free(grid);
	return (0);
}
