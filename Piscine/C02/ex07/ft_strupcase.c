/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 12:28:31 by hecho             #+#    #+#             */
/*   Updated: 2020/07/13 14:54:55 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int main()
{
	int		i;
	char	*str;
	char	str_up[20];

	str = "hi my123";
	i = 0;
	while (i < 20)
	{
		str_up[i] = str[i];
		i++;
	}
	ft_strupcase(str_up);
	printf("%s\n", str_up);
}
