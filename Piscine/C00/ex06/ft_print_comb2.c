/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 13:25:54 by hecho             #+#    #+#             */
/*   Updated: 2020/07/08 13:29:15 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int n)
{
	char arr[2];

	arr[0] = n / 10 + 48;
	arr[1] = n % 10 + 48;
	write(1, arr, 2);
}

void	ft_print_comb2(void)
{
	int		arr[2];
	char	chars[2];

	arr[0] = 0;
	chars[0] = ',';
	chars[1] = ' ';
	while (arr[0] <= 98)
	{
		arr[1] = arr[0] + 1;
		while (arr[1] <= 99)
		{
			print(arr[0]);
			write(1, &chars[1], 1);
			print(arr[1]);
			if (!(arr[0] == 98 && arr[1] == 99))
			{
				write(1, chars, 2);
			}
			arr[1]++;
		}
		arr[0]++;
	}
}
