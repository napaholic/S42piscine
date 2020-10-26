/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_int.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungspar <sungspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 19:39:51 by sungspar          #+#    #+#             */
/*   Updated: 2020/10/24 22:41:12 by sungspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHAR_TO_INT_H
# define FT_CHAR_TO_INT_H

void	ft_change_pos(int *row, int *col);
void	ft_push_temp(char *temp, int **grid);
int		ft_char_to_int(char *str, int **num);

#endif
