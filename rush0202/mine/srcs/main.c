/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:30:59 by jaewkim           #+#    #+#             */
/*   Updated: 2020/11/01 03:04:16 by ycha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0

int		is_space(char ch)
{
	return (ch == ' ' 
			|| ch == '\t' 
			|| ch == '\n' 
			|| ch == '\r'
			|| ch == '\v'
			|| ch == '\f');
}

int		is_numeric(char ch)
{
	return ('0' <= ch && ch <= '9');
}

int		isnumeric(char *str)    //양의정수만 남겨야함 공백문자 전부제거, 부호 제거, 오류판별
{
	char	*ptr;

	ptr = str;
	while (is_space(*ptr))
		++ptr;
	if (*ptr == '+')
		++ptr;
	while (is_numeric(*ptr))
	{
		*str = *ptr;
		++str;
		++ptr;
	}
	if (is_space(*ptr))
		*str = '\0';
	while (is_space(*ptr))
		++ptr;
	if (*ptr)
	{
		error_handle();
		return FALSE;
	}
	return TRUE;
}

int		main(int ac, char **av) 
{
	if (ac == 2 && isnumeric(av[1]))
	{
		indexing("default.dict");
		print(av[1]);
	}
	else if (ac == 3 && isnumeric(av[2]))
	{
		indexing(av[1]);
		print(av[2]);
	}
	else
	{
		write(1, "Error\n", 6);
		return 0;
	}
	free_data();
	return 0;
}
