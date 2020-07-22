/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 19:15:24 by hecho             #+#    #+#             */
/*   Updated: 2020/07/22 12:52:04 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rec(int n)
{
	char c;

	if (n == 0)
		return ;
	rec(n / 10);
	c = '0' + n % 10;
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char c;

	if (nb < 0)
	{
		write(1, "-", 1);
		rec(-(nb / 10));
		c = '0' - nb % 10;
	}
	else
	{
		rec(nb / 10);
		c = '0' + nb % 10;
	}
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int sign;
	int value;

	sign = 1;
	value = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = sign * (-1);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		value = value * 10;
		value = value + (sign * (*str - '0'));
		str++;
	}
	return (value);
}
