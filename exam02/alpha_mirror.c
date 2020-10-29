/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:10:53 by mjay              #+#    #+#             */
/*   Updated: 2020/10/29 15:47:38 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* write aprogram called alpha_mirror that takes a string and 
 * displays this string after replacing each alphabetical 
 * cariacter by the opposite alphabetical character, followe
 * by a new line
 */

#include <unistd.h>
int		alphachk(char ch)
{
	if ('a' <= ch && ch <= 'z')
		return (1);
	if ('A' <= ch && ch <= 'Z')
		return (2);
	return (0);
}


char	mirrorchange(char ch, int lowup)
{
	char c;
	if (lowup == 1)
		c = 'z' - (ch - 'a');
	if (lowup == 2)
		c = 'Z' - (ch - 'A');
	return (c);
}

void	print(char *argv)
{
	unsigned	int		idx;
	char				c;
	idx = 0;
	while (argv[idx])
	{
		c = argv[idx];
		if (alphachk(arf)
		write(1, &c, 1 );
		idx++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{

	}
	write(1, "\n", 1);
	return 0;
}
