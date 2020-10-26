/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rec_check_start.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungspar <sungspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 21:45:32 by sungspar          #+#    #+#             */
/*   Updated: 2020/10/24 22:33:42 by sungspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rec_check.h"

int	check_view(int **grid, int row, int col)
{
	while (row != 5 || col != 5)
	{
		if (row == 0 && col < 5)
		{
			if (check_view_up(grid, row, col++))
				return (-1);
		}
		else if (row < 5 && col == 5)
		{
			if (check_view_right(grid, row++, col))
				return (-1);
		}
		else if (row == 5 && col > 0)
		{
			if (check_view_down(grid, row, col--))
				return (-1);
		}
		else if (row > 0 && col == 0)
		{
			if (check_view_left(grid, row--, col))
				return (-1);
		}
	}
	return (0);
}

int	check_overlap_val(int **grid, int row, int col)
{
	int temp;

	temp = col - 1;
	while (temp > 0)
	{
		if (grid[row][temp] == grid[row][col])
			return (-1);
		temp--;
	}
	temp = row - 1;
	while (temp > 0)
	{
		if (grid[temp][col] == grid[row][col])
			return (-1);
		temp--;
	}
	return (0);
}
