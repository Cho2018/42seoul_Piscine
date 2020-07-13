/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 13:36:06 by hecho             #+#    #+#             */
/*   Updated: 2020/07/13 14:56:14 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 'A' && c <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int main()
{
	int		i;
	char	*str;
	char	str_low[20];

	str = "HI MY123";
	i = 0;
	while (i < 20)
	{
		str_low[i] = str[i];
		i++;
	}
	ft_strlowcase(str_low);
	printf("%s\n", str_low);
}
