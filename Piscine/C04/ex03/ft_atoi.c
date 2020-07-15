/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:54:15 by hecho             #+#    #+#             */
/*   Updated: 2020/07/15 13:01:28 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int sign_count;
	int sign;
	int value;

	sign_count = 0;
	sign = 1;
	value = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign_count++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		value = value * 10;
		value = value + *str - 48;
		str++;
	}
	if (sign_count % 2 == 1)
		sign = -1;
	return (sign * value);
}

int main()
{
	printf("%d\n", ft_atoi("---+--+1234ab567"));
}
