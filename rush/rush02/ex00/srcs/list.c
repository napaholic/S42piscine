/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycha <ycha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 20:36:57 by ycha              #+#    #+#             */
/*   Updated: 2020/11/01 22:26:19 by ycha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "string.h"
#include "memory.h"

t_list	*create_list(void)
{
	t_list	*head;

	if (!(head = (t_list*)ft_malloc(sizeof(t_list))))
		return (0);
	head->link = 0;
	return (head);
}

int		insert_list(t_list *head, char *key, char *value)
{
	t_list	*ptr;

	if (!(ptr = (t_list*)ft_malloc(sizeof(t_list))))
		return (0);
	ptr->key = key;
	ptr->value = value;
	ptr->link = head->link;
	head->link = ptr;
	return (1);
}

char	*search_list(t_list *head, char *key)
{
	t_list	*p;

	p = head;
	while (p->link != 0)
	{
		p = p->link;
		if (ft_strcmp(p->key, key) == 0)
			return (p->value);
	}
	return (0);
}
