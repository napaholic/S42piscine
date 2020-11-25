/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operater.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 16:11:50 by mjay              #+#    #+#             */
/*   Updated: 2020/10/29 21:13:24 by mjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void cal(int a, int b, char *ca)
{
	int i;
	int result;
	
	result = 0;
	i = -1;
	while (ca[++i]);
	if (i == 1)
	{
		if (ca[0] == '+')
			result = a + b;
		else if (ca[0] == '-')
			result = a - b;
		else if (ca[0] == '*')
			result = a * b;
		else if (ca[0] == '/')
			result = a / b;
		else if (ca[0] == '%')
			result = a % b;
		else
			return ;
		printf("%d", result);
	}
	else
		return ;
}
int main (int argc, char **argv)
{
	int a;
	int b;
	/*if (argc == 4)
	{
		if (atoi(argv[1]) && atoi(argv[3]))
		{
			a = atoi(argv[1]);
			b = atoi(argv[3]);
			cal(a, b, argv[2]);
		}
		else
		{
			write(1, "\n", 1);
			return 0;
		}

	}*/
	printf("\n");
	int i = 0;
	while (argc > i)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return 0;
	
}
