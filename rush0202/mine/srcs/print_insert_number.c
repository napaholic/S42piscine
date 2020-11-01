/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_insert_number.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonpark <jeonpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 22:33:07 by jeonpark          #+#    #+#             */
/*   Updated: 2020/11/01 03:02:58 by ycha             ###   ########.fr       */
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

	if (!*ptr)
		return 1;
	tmp = *ptr;
	*ptr = '1';
	if (!(value = search(ptr)))
		return 0;
	if (!(one = search("1")))
		return 0;
	if (strcmp(value, one))    // if different
		insert_print_list(value);
	*ptr = tmp;
	return 1;
}

int	insert_digit(char *ptr)
{
	char	key[2];
	char	*value;

	key[0] = *ptr;
	key[1] = '\0';
	value = search(key);
	insert_print_list(value);
	return 1;
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
	value = search(key);
	insert_print_list(value);
	return 1;
}

int	insert_tens(char *ptr)
{
	char	*value;
	char	key[3];

	key[0] = *(ptr - 1);
	key[1] = '0';
	key[2] = '\0';
	*(ptr - 1) = '0';
	value = search(key);
	insert_print_list(value);
	return 1;
}

int	insert_hundreds(char *ptr)
{
	char	*value;
	char	key[2];

	insert_print_list(search("100"));
	key[0] = *(ptr - 2);
	key[1] = '\0';
	*(ptr - 2) = '0';
	value = search(key);
	insert_print_list(value);
	return 1;
}
