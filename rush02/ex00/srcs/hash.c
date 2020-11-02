/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycha <ycha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 20:25:38 by ycha              #+#    #+#             */
/*   Updated: 2020/11/01 22:28:33 by ycha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hash.h"
#include "list.h"

t_list	*g_hash_table[TABLE_SIZE];

int		create_hash(void)
{
	int i;

	i = -1;
	while (++i < TABLE_SIZE)
		if (!(g_hash_table[i] = create_list()))
			return (0);
	return (1);
}

t_list	*search_hash(char *key)
{
	return (g_hash_table[hash(key)]);
}

int		hash(char *key)
{
	int num;

	num = 0;
	while (*key)
		num += *key++;
	return (num % TABLE_SIZE);
}
