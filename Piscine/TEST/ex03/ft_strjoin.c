/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 16:37:49 by hecho             #+#    #+#             */
/*   Updated: 2020/07/22 13:49:13 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long long	ft_strlen(char *str)
{
	long long i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		*ft_strcpy(char *dest, char *src)
{
	while (*src)
		*(dest++) = *(src++);
	return (dest);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	int			i;
	long long	len;
	char		*temp;
	char		*answer;

	if (!size)
	{
		answer = (char *)malloc(sizeof(char) * 1);
		answer[0] = 0;
		return (answer);
	}
	len = 0;
	i = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	answer = (char *)malloc(len + (size - 1) * ft_strlen(sep) + 1);
	temp = ft_strcpy(answer, strs[0]);
	i = 1;
	while (i < size)
	{
		temp = ft_strcpy(temp, sep);
		temp = ft_strcpy(temp, strs[i++]);
	}
	*temp = 0;
	return (answer);
}
