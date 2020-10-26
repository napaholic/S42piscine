/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rec_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungspar <sungspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 21:44:05 by sungspar          #+#    #+#             */
/*   Updated: 2020/10/24 22:16:47 by sungspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_view_up(int **grid, int row, int col)
{
	int temp;
	int count;

	count = 1;
	temp = 1;
	row = 2;
	while (row < 5)
	{
		if (grid[row][col] > grid[temp][col])
		{
			temp = row++;
			count++;
		}
		else
			row++;
	}
	if (count == grid[0][col])
		return (0);
	return (-1);
}

int	check_view_down(int **grid, int row, int col)
{
	int temp;
	int count;

	if (col == 5)
		return (0);
	count = 1;
	temp = 4;
	row = 3;
	while (row > 0)
	{
		if (grid[row][col] > grid[temp][col])
		{
			temp = row--;
			count++;
		}
		else
			row--;
	}
	if (count == grid[5][col])
		return (0);
	return (-1);
}

int	check_view_left(int **grid, int row, int col)
{
	int temp;
	int count;

	if (row == 5)
		return (0);
	count = 1;
	temp = 1;
	col = 2;
	while (col < 5)
	{
		if (grid[row][col] > grid[row][temp])
		{
			temp = col++;
			count++;
		}
		else
			col++;
	}
	if (count == grid[row][0])
		return (0);
	return (-1);
}

int	check_view_right(int **grid, int row, int col)
{
	int temp;
	int count;

	if (row == 0)
		return (0);
	count = 1;
	temp = 4;
	col = 3;
	while (col > 0)
	{
		if (grid[row][col] > grid[row][temp])
		{
			temp = col--;
			count++;
		}
		else
			col--;
	}
	if (count == grid[row][5])
		return (0);
	return (-1);
}
