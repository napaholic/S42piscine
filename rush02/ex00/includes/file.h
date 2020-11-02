/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycha <ycha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 20:19:10 by ycha              #+#    #+#             */
/*   Updated: 2020/11/01 20:22:54 by ycha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
# define FILE_H
# define BUFFSIZE 4096

int	file_open(char *file_name);
int	file_read_next_line(int fd, char *buf);
int	file_close(int fd);

#endif
