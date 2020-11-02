/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycha <ycha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 20:28:59 by ycha              #+#    #+#             */
/*   Updated: 2020/11/01 22:29:54 by ycha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASH_H
# define HASH_H
# define TABLE_SIZE 100
# include "list.h"

int		create_hash(void);
t_list	*search_hash(char *key);
int		hash(char *key);

#endif
