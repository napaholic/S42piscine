/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungspar <sungspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 13:43:35 by jpyo              #+#    #+#             */
/*   Updated: 2020/10/24 21:58:31 by sungspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_start.h"

int	main(int argv, char *args[])
{
	unsigned int size;

	if (argv != 2)
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	size = 0;
	while (args[1][size])
		size++;
	if (size != 31)
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	if (ft_start(args[1], (size + 1) / 2))
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	return (0);
}
