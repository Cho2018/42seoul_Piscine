/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 20:48:47 by hecho             #+#    #+#             */
/*   Updated: 2020/07/22 10:43:49 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *answer;

	answer = (int *)malloc(sizeof(int) * length);
	if (answer == 0)
		return (0);
	i = 0;
	while (i < length)
	{
		answer[i] = f(tab[i]);
		i++;
	}
	return (answer);
}

int ft_func(int n)
{
	return (n * n);
}

int main()
{
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *answer = ft_map(arr, 10, &ft_func);

	for (int i = 0; i < 10; i++)
		printf("%d\n", answer[i]);
}
