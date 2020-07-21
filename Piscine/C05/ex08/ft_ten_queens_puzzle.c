/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 14:51:16 by hecho             #+#    #+#             */
/*   Updated: 2020/07/21 17:11:16 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int *pann)
{
	int	i;
	int	temp;

	i = 0;
	while (i < 10)
	{
		temp = pann[i] + '0';
		write(1, &temp, 1);
		i++;
	}
	write(1, "\n", 1);
}

int		is_possible(int row, int n, int *pann)
{
	int i;
	int temp;

	i = 0;
	while (i < n)
	{
		if (row == pann[i])
			return (0);
		temp = row > pann[i] ? row - pann[i] : pann[i] - row;
		if (n - i == temp)
			return (0);
		i++;
	}
	return (1);
}

void	rec(int num, int *pann, int *count)
{
	int r;

	if (num == 10)
	{
		(*count)++;
		print(pann);
		return ;
	}
	r = 0;
	while (r < 10)
	{
		if (is_possible(r, num, pann))
		{
			pann[num] = r;
			rec(num + 1, pann, count);
		}
		r++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int pann[10];
	int count;

	count = 0;
	rec(0, pann, &count);
	return (count);
}
