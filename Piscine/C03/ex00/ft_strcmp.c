/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 11:13:17 by hecho             #+#    #+#             */
/*   Updated: 2020/07/15 11:15:59 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return s1[i] - s2[i];
		i++;
	}
	return s1[i] - s2[i];
}

int main()
{
	char *s1;
	char *s2;

	s1 = "abcee";
	s2 = "abcd";
	printf("%d\n%d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
}
