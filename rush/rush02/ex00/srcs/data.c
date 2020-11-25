/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycha <ycha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 20:14:52 by ycha              #+#    #+#             */
/*   Updated: 2020/11/01 21:30:11 by ycha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"
#include "hash.h"
#include "list.h"

int		insert(char *key, char *value)
{
	if (key == 0 || value == 0)
		return (1);
	return (insert_list(search_hash(key), key, value));
}

char	*search(char *key)
{
	return (search_list(search_hash(key), key));
}
