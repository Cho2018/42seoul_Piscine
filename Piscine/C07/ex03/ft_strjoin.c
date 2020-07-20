/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 13:21:03 by hecho             #+#    #+#             */
/*   Updated: 2020/07/20 12:46:05 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*temp;
	char	*answer;

	if (size == 0)
	{
		answer = (char *)malloc(sizeof(char) * 1);
		answer[0] = 0;
		return (answer);
	}
	len = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	answer = (char *)malloc(sizeof(char) * (len + 1));
	temp = ft_strcat(answer, strs[0]);
	i = 1;
	while (i < size)
	{
		temp = ft_strcat(temp, sep);
		temp = ft_strcat(temp, strs[i++]);
	}
	temp[i] = '\0';
	return (answer);
}

int main()
{
	char *strs[7] = {
		"abc",
		"123",
		"def",
		"456",
		"ghi",
		"789",
		"xyz"
	};
	char sep[] = "+";
	char *answer = ft_strjoin(3, strs, sep);

	printf("%s\n", answer);
}
