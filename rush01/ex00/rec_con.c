/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rec_con.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungspar <sungspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 21:44:55 by sungspar          #+#    #+#             */
/*   Updated: 2020/10/24 22:33:37 by sungspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rec_check_start.h"

int	rec_con(int **grid, int row, int col)
{
	int val;

	if (col == 5)
	{
		row++;
		col = 1;
	}
	if (row == 5 && check_view(grid, 0, 1))
		return (-1);
	if (row == 5)
		return (0);
	val = 1;
	while (val <= 4)
	{
		grid[row][col] = val;
		if (!check_overlap_val(grid, row, col))
		{
			if (!rec_con(grid, row, col + 1))
				return (0);
		}
		grid[row][col] = 0;
		val++;
	}
	return (-1);
}
