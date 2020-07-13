/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 17:30:47 by hecho             #+#    #+#             */
/*   Updated: 2020/07/13 10:23:02 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int main()
{
	int arr[5] = {3, -1, 99, 7, -9};
	int size;

	size = 5;

	ft_sort_int_tab(arr, size);

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i < size)
	{
		j = 1;
		while (j < size)
		{
			if (tab[j - 1] > tab[j])
			{
				temp = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
