/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 20:20:47 by hecho             #+#    #+#             */
/*   Updated: 2020/07/22 12:22:46 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_swap(char **tab, int i, int j)
{
	char *temp;

	temp = tab[i];
	tab[i] = tab[j];
	tab[j] = temp;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int i;
	int j;

	i = 0;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
				ft_swap(tab, i, j);
			j++;
		}
		i++;
	}
}

int main()
{
	char **arr = (char **)malloc(sizeof(char *) * 7);
	arr[0] = "abc";
	arr[1] = "b";
	arr[2] = "aa";
	arr[3] = "fde";
	arr[4] = "ccc";
	arr[5] = "abcd";
	arr[6] = 0;
	
	ft_sort_string_tab(arr);

	for (int i = 0; arr[i]; i++)
		printf("%s\n", arr[i]);
}
