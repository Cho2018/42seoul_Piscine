/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 20:59:15 by hecho             #+#    #+#             */
/*   Updated: 2020/07/22 12:12:21 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (i < length)
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}

int ft_func(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		len++;
		if (len >= 5)
			return (1);
	}
	return (0);
}

int main()
{
	char **arr = (char **)malloc(sizeof(char *) * 7);
	arr[0] = "abcde";
	arr[1] = "abcde";
	arr[2] = "abcde";
	arr[3] = "a";
	arr[4] = "ab";
	arr[5] = "abc";
	arr[6] = "abcd";

	printf("%d\n", ft_count_if(arr, 7, &ft_func));
}
