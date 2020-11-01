/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonpark <jeonpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:25:47 by jeonpark          #+#    #+#             */
/*   Updated: 2020/11/01 03:01:23 by ycha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "print.h"
#include "print_list.h"
#include "print_insert_number.h"

int insert_under_1000(char *start, char *ptr)
{
	if (!insert_thousands(ptr))
		return 0;
	if (start == ptr)
	{
		if (ptr + 1 == '\0')
			return insert_digit(ptr);
		else if (*ptr)
			return insert_digit(ptr);
	}
	else if (start == (ptr - 1))
	{
		if (*(ptr - 1) == '1')
			if(!insert_tenth(ptr))
				return 0;
		if (*ptr)
			if(!insert_digit(ptr))
				return 0;
		if (*(ptr - 1))
			if(!insert_tens(ptr))
				return 0;
	}
	else
		return insert_hundreds(ptr);
	return 1; //????
}

int			print(char *str)
{
	char			*start;
	char			*ptr;

	create_print_list();
	start = str;
	while (*str)
		++str;
	ptr = str - 1;
	while (start <= ptr)
	{
		if (!insert_under_1000(start, ptr))
			return 0;
		ptr -= 3;
	}
	show_print_list();
	return 1;
}
