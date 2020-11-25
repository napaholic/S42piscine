/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rec_con.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungspar <sungspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 21:15:01 by sungspar          #+#    #+#             */
/*   Updated: 2020/10/24 21:15:36 by sungspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REC_CON_H
# define REC_CON_H

int	check_overlap_val(int **grid, int row, int col);
int	rec_con(int **grid, int row, int col);

#endif
