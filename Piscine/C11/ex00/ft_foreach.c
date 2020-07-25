/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 20:43:16 by hecho             #+#    #+#             */
/*   Updated: 2020/07/22 12:10:16 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

void ft_putnbr(int nb)
{
	char c = nb + '0';
	write(1, &c, 1);
}

int main()
{
	int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	ft_foreach(arr, 8, &ft_putnbr);
}
