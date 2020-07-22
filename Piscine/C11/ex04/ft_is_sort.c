/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 12:05:35 by hecho             #+#    #+#             */
/*   Updated: 2020/07/22 12:12:47 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;
	int succ1;
	int succ2;

	if (length < 2)
		return (1);
	succ1 = 0;
	succ2 = 0;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			succ1++;
		if (f(tab[i], tab[i + 1]) <= 0)
			succ2++;
		i++;
	}
	if (succ1 == length - 1 || succ2 == length - 1)
		return (1);
	return (0);
}

int ft_func(int n1, int n2)
{
	return (n1 - n2);
}

int main()
{
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 10};
	printf("%d\n", ft_is_sort(arr, 10, &ft_func));
}
