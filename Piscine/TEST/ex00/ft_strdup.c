/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 12:29:35 by hecho             #+#    #+#             */
/*   Updated: 2020/07/20 14:37:33 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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
