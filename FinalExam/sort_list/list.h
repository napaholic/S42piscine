/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 21:01:41 by mjay              #+#    #+#             */
/*   Updated: 2020/11/03 21:01:58 by mjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef	struct		s_list
{
	int				data;
	struct s_list	*next;
}					t_list;
