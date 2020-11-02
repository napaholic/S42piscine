/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycha <ycha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 20:46:09 by ycha              #+#    #+#             */
/*   Updated: 2020/11/01 22:31:00 by ycha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_H
# define MEMORY_H

typedef struct			s_mem_list
{
	void				*mem;
	struct s_mem_list	*link;
}						t_mem_list;

int						ft_malloc_init(void);
void					*ft_malloc(int size);
void					ft_free(void);

#endif
