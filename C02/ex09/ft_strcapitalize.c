/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 22:58:00 by jaewkim           #+#    #+#             */
/*   Updated: 2020/10/22 00:04:22 by mjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int		islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

char	*ft_strcapitalize(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (isupper(str[i]) && isupper(str[i - 1]) && islower(str[i - 1))
	}
}


