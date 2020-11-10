/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 21:00:31 by mjay              #+#    #+#             */
/*   Updated: 2020/11/05 20:27:50 by mjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "list.h"

t_list			*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int i;
	int tmp;
	int idx;
	t_list *lsttmp;

	lsttmp = lst;
	idx = 0;
	tmp = 0;
	i = 0;
	while (lsttmp && lsttmp = lsttmp->next)
		idx++;
	while (--idx)
	{
		lsttmp = lst;
		while (lsttmp && lsttmp->next)
		{
			if (cmp(lsttmp->data, lsttmp->next->data))
			{
				tmp = lsttmp->data;
				lsttmp->data = lsttmp->next->data;
				lsttmp->next->data = tmp;
			}
			lsttmp = lsttmp->next;
		}
	}
}

t_list			*ft_create_list(int data)
{
	t_list	*res;

	if (!(res = (t_list *)malloc(sizeof(t_list) * 1)))
		return (0);
	res->
}

int				main(int ac, char **av)
{
	t_list a = 
}
