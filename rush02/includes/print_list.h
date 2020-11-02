/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycha <ycha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 21:22:13 by ycha              #+#    #+#             */
/*   Updated: 2020/11/01 21:22:29 by ycha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_LIST_H
# define PRINT_LIST_H

typedef struct			s_print_list
{
	char				*str;
	struct s_print_list	*link;
}						t_print_list;

int						create_print_list(void);
int						insert_print_list(char *str);
void					show_print_list(void);

#endif
