/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 17:25:29 by hecho             #+#    #+#             */
/*   Updated: 2020/07/08 18:31:31 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main()
{
	int arr[7] = {1, 2, 3, 4, 5, 6, 7};
	int size;

	size = 7;

	ft_rev_int_tab(arr, size);

	for (int i = 0; i < 7; i++)
	{
		printf("%d  ", arr[i]);
	}
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	while (i < size--)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
	}
}
