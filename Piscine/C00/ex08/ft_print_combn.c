/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:43:37 by hecho             #+#    #+#             */
/*   Updated: 2020/07/08 12:48:35 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rec(char *arr, int volume, int n)
{
	int i;

	if (volume == n)
	{
		if (arr[0] = '0' + 10 - n)
			write(1, arr, n);
		else
			write(1, arr, n + 2);
		return ;
	}
	i = 0;
	while (i <= 9)
	{
		if (volume == 0 || arr[volume - 1] < '0' + i)
		{
			arr[volume] = '0' + i;
			rec(arr, volume + 1, n);
		}
		i++;
	}
}

void	ft_print_combn(int n)
{
	char arr[n + 2];

	arr[n] = ',';
	arr[n + 1] = ' ';
	rec(arr, 0, n);
}
