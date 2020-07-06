/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:01:49 by hecho             #+#    #+#             */
/*   Updated: 2020/07/06 15:09:10 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_alphabet(void);

int main() 
{
	ft_print_alphabet();
}

void    ft_print_alphabet(void) 
{
	char c;

	c = 'a';
	while (c <= 'z') 
	{
		write(1, &c, 1);
		c++;
	}
}


