/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonpark <jeonpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:25:47 by jeonpark          #+#    #+#             */
/*   Updated: 2020/11/01 22:53:32 by ycha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"
#include "print_list.h"
#include "print_insert_number.h"

int	print_zeros(char *start, char *ptr)
{
	return ((start == ptr && *ptr != '0')
			|| ((start == (ptr - 1)) && (*(ptr - 1) != '0' || *ptr != '0'))
			|| (start <= (ptr - 2) && (*(ptr - 2) != '0'
			|| *(ptr - 1) != '0'
			|| *ptr != '0')));
}

int	insert_under_1000(char *start, char *ptr)
{
	if (print_zeros(start, ptr))
		if (!insert_thousands(ptr))
			return (0);
	if (start == ptr)
	{
		if (*(ptr + 1) == '\0')
			return (insert_digit(ptr));
		else if (*ptr != '0')
			return (insert_digit(ptr));
		return (1);
	}
	if (*(ptr - 1) == '1')
		if (!insert_tenth(ptr))
			return (0);
	if (*ptr != '0')
		if (!insert_digit(ptr))
			return (0);
	if (*(ptr - 1) != '0')
		if (!insert_tens(ptr))
			return (0);
	if (start != (ptr - 1) && *(ptr - 2) != '0')
		if (!insert_hundreds(ptr))
			return (0);
	return (1);
}

int	print(char *str)
{
	char	*start;
	char	*ptr;

	if (!(create_print_list()))
		return (0);
	start = str;
	while (*str)
		++str;
	ptr = str - 1;
	while (start <= ptr)
	{
		if (!insert_under_1000(start, ptr))
			return (0);
		ptr -= 3;
	}
	show_print_list();
	return (1);
}
