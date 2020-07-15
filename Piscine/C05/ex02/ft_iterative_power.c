/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 16:50:19 by hecho             #+#    #+#             */
/*   Updated: 2020/07/15 16:51:49 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int i;
	int answer;

	if (power < 0)
		return (0);
	i = 0;
	answer = 1;
	while (i < power)
	{
		answer = answer * nb;
		i++;
	}
	return (answer);
}

int main()
{
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(2, 3));
}
