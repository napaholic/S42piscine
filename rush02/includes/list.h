/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycha <ycha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 20:40:20 by ycha              #+#    #+#             */
/*   Updated: 2020/11/01 20:49:17 by ycha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct		s_list
{
	char			*key;
	char			*value;
	struct s_list	*link;
}					t_list;

t_list				*create_list(void);
int					insert_list(t_list *head, char *key, char *value);
char				*search_list(t_list *head, char *key);
void				show_list(t_list *head);

#endif
