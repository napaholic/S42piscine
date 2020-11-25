/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungspar <sungspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 19:38:38 by sungspar          #+#    #+#             */
/*   Updated: 2020/10/24 22:01:13 by sungspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_change_pos(int *row, int *col)
{
	if (*row == 0 && *col == 5)
	{
		*row = 5;
		*col = 1;
	}
	else if (*row == 5 && *col == 5)
	{
		*row = 1;
		*col = 0;
	}
	else if (*row == 5 && *col == 0)
	{
		*row = 1;
		*col = 5;
	}
}

void	ft_push_temp(char *temp, int **grid)
{
	int row;
	int col;
	int i;

	row = 0;
	col = 1;
	i = 0;
	while (i < 16)
	{
		if (row == 0 && col > 0 && col < 5)
			grid[row][col++] = temp[i++] - '0';
		else if (row == 5 && col > 0 && col < 5)
			grid[row][col++] = temp[i++] - '0';
		else if (row > 0 && row < 5 && col == 0)
			grid[row++][col] = temp[i++] - '0';
		else if (row > 0 && row < 5 && col == 5)
			grid[row++][col] = temp[i++] - '0';
		else
			ft_change_pos(&row, &col);
	}
}

int		ft_char_to_int(char *str, int **grid)
{
	unsigned int	i;
	unsigned int	j;
	char			temp[16];

	i = 0;
	j = 0;
	while (str[i])
	{
		if (i % 2 == 1 && str[i] == ' ')
			i++;
		else if (i % 2 == 0 && str[i] >= '1' && str[i] <= '4')
			temp[j++] = str[i++];
		else
			return (-1);
	}
	ft_push_temp(temp, grid);
	return (0);
}
