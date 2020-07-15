/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 16:44:09 by hecho             #+#    #+#             */
/*   Updated: 2020/07/15 16:47:32 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int value;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	value = 1;
	while (nb > 0)
	{
		value = value * nb;
		nb--;
	}
	return (value);
}

int main()
{
	printf("%d\n", ft_iterative_factorial(3));
}
