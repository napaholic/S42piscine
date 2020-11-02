/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycha <ycha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 22:28:46 by ycha              #+#    #+#             */
/*   Updated: 2020/11/01 22:28:47 by ycha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"
#include <stdlib.h>

t_mem_list	*g_mem;

int		ft_malloc_init(void)
{
	if (!(g_mem = (t_mem_list*)malloc(sizeof(t_mem_list))))
		return (0);
	g_mem->mem = 0;
	g_mem->link = 0;
	return (1);
}

void	*ft_malloc(int size)
{
	t_mem_list	*ptr;

	if (!(ptr = (t_mem_list*)malloc(sizeof(t_mem_list))))
	{
		ft_free();
		return (0);
	}
	ptr->link = g_mem->link;
	g_mem->link = ptr;
	if (!(ptr->mem = malloc(size)))
	{
		ft_free();
		return (0);
	}
	return (ptr->mem);
}

void	ft_free_rec(t_mem_list *head)
{
	if (head->link != 0)
		ft_free_rec(head->link);
	if (head->mem)
		free(head->mem);
	free(head);
}

void	ft_free(void)
{
	ft_free_rec(g_mem);
}
