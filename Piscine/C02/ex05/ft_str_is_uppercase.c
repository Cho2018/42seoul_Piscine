/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:17:06 by hecho             #+#    #+#             */
/*   Updated: 2020/07/13 14:52:30 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!(c >= 'A' && c <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	char *str1;
	char *str2;

	str1 = "HI";
	str2 = "Hi";
	printf("%d\n", ft_str_is_uppercase(str1));
	printf("%d\n", ft_str_is_uppercase(str2));
}
