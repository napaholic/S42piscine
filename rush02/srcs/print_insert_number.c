/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_insert_number.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonpark <jeonpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 22:33:07 by jeonpark          #+#    #+#             */
/*   Updated: 2020/11/01 21:18:19 by ycha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"
#include "print_list.h"
#include "print_insert_number.h"

int	insert_thousands(char *ptr)
{
	char	tmp;
	char	*value;
	char	*one;

	if (*ptr == '0')
		return (1);
	tmp = *ptr;
	*ptr = '1';
	if (!(value = search(ptr)))
		return (0);
	if (!(one = search("1")))
		return (0);
	if (value != one)
		if (!(insert_print_list(value)))
			return (0);
	*ptr = tmp;
	return (1);
}

int	insert_digit(char *ptr)
{
	char	key[2];
	char	*value;

	key[0] = *ptr;
	key[1] = '\0';
	*ptr = '0';
	if (!(value = search(key)))
		return (0);
	if (!(insert_print_list(value)))
		return (0);
	return (1);
}

int	insert_tenth(char *ptr)
{
	char	key[3];
	char	*value;

	key[0] = *(ptr - 1);
	key[1] = *ptr;
	key[2] = '\0';
	*(ptr - 1) = '0';
	*ptr = '0';
	if (!(value = search(key)))
		return (0);
	if (!(insert_print_list(value)))
		return (0);
	return (1);
}

int	insert_tens(char *ptr)
{
	char	*value;
	char	key[3];

	key[0] = *(ptr - 1);
	key[1] = '0';
	key[2] = '\0';
	*(ptr - 1) = '0';
	if (!(value = search(key)))
		return (0);
	if (!(insert_print_list(value)))
		return (0);
	return (1);
}

int	insert_hundreds(char *ptr)
{
	char	*value;

	if (!(value = search("100")))
		return (0);
	if (!(insert_print_list(value)))
		return (0);
	return (insert_digit(ptr - 2));
}
