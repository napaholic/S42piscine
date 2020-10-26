/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rec_check.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungspar <sungspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 21:48:53 by sungspar          #+#    #+#             */
/*   Updated: 2020/10/24 21:49:29 by sungspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REC_CHECK_H
# define REC_CHECK_H

int	check_view_up(int **grid, int row, int col);
int	check_view_down(int **grid, int row, int col);
int	check_view_left(int **grid, int row, int col);
int	check_view_right(int **grid, int row, int col);

#endif
