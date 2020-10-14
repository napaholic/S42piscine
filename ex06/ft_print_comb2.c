/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 07:03:21 by jaewkim           #+#    #+#             */
/*   Updated: 2020/10/15 08:10:46 by jaewkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd>

void ft_print_comb2(void);

int main(){
	ft_print_comb2();
	return 0;
}

void ft_print_comb2(void){
	recur('0', '0', '0', '1');
}

int recur(char a, char b, char c, char d){
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, ' ', 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if(a==57&&b==56&&c==57&&d==57){
		return 0;		
	}
	write(1, ',', 1);
	write(1, ' ', 1);
	if(d==57){
		if(c==57){
			if(b==57){
				recur(a+1, 0, c, d);
			}else{

			}
			recur(a, b+1, c, b+2);
		}else{
			return recur(a, b, c+1, c+2);
		}
	}
	else{
		return recur(a, b, c, d+1);
	}
	
}

