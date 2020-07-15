/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 11:16:47 by hecho             #+#    #+#             */
/*   Updated: 2020/07/15 11:19:55 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s1[i] && s2[i] && i < n - 1)
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

	s1 = "BlockDmask";
	s2 = "BlockFmask";
	printf("%d\n%d\n", ft_strncmp(s1, s2, 6), strncmp(s1, s2, 6));
}
