/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 11:59:25 by hecho             #+#    #+#             */
/*   Updated: 2020/07/08 12:30:05 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);

int main()
{
	ft_putnbr(1);
	printf("\n");

	ft_putnbr(2147483647);
	printf("\n");

	ft_putnbr(-1);
	printf("\n");

	ft_putnbr(-2147483648);
	printf("\n");

	ft_putnbr(0);
	printf("\n");
}

void	cal(int nb)
{
	char c;

	if (nb == 0)
		return ;
	cal(nb / 10);
	c = '0' + nb % 10;
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char c;

	if (nb >= 0)
	{
		cal(nb / 10);
		c = '0' + nb % 10;
	}
	else
	{
		write(1, "-", 1);
		cal(-(nb / 10));
		c = '0' - nb % 10;
	}
	write(1, &c, 1);
}
