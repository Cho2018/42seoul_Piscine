/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 20:54:31 by hecho             #+#    #+#             */
/*   Updated: 2020/07/22 12:11:39 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_any(char **tab, int (*f)(char*))
{
	int i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}

int ft_func(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		len++;
		if (len >= 4)
			return (1);
	}
	return (0);
}

int main()
{
	char **arr = (char **)malloc(sizeof(char *) * 7);
	arr[0] = "abc";
	arr[1] = "a";
	arr[2] = "abcd";
	arr[3] = "abcd";
	arr[4] = "abc";
	arr[5] = "ab";
	arr[6] = 0;

	printf("%d\n", ft_any(arr, &ft_func));
}
