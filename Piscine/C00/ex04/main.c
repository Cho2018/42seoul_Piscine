/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:27:06 by hecho             #+#    #+#             */
/*   Updated: 2020/07/08 12:55:59 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

int main()
{
	ft_is_negative(7);
	ft_is_negative(-7);
}

void	ft_is_negative(int n)
{
	char c;

	c = 'N';
	if (n >= 0)
	{
		c = 'P';
	}
	write(1, &c, 1);
}
