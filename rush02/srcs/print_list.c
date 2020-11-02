/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycha <ycha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 21:11:54 by ycha              #+#    #+#             */
/*   Updated: 2020/11/01 21:29:05 by ycha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "print_list.h"
#include "memory.h"
#include "string.h"

t_print_list	*g_print_list_head;

int		create_print_list(void)
{
	if (!(g_print_list_head = (t_print_list*)ft_malloc(sizeof(t_print_list))))
		return (0);
	g_print_list_head->link = 0;
	return (1);
}

int		insert_print_list(char *str)
{
	t_print_list	*ptr;
	if (!(ptr = (t_print_list*)ft_malloc(sizeof(t_print_list))))
		return (0);
	ptr->str = str;
	ptr->link = g_print_list_head->link;
	g_print_list_head->link = ptr;
	return (1);
}

void	show_print_list(void)
{
	t_print_list	*p;

	p = g_print_list_head;
	while (p->link != 0)
	{
		p = p->link;
		ft_putstr(p->str);
		ft_putstr(" ");
	}
}
