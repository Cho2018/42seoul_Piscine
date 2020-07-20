/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 12:29:35 by hecho             #+#    #+#             */
/*   Updated: 2020/07/20 10:46:59 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*answer;

	i = 0;
	while (src[i])
		i++;
	answer = (char *)malloc(sizeof(char) * i);
	i = 0;
	while (src[i])
	{
		answer[i] = src[i];
		i++;
	}
	answer[i] = '\0';
	return (answer);
}

int main()
{
	char src[] = "abc";
	printf("%s\n%s\n", ft_strdup(src), strdup(src));
}
