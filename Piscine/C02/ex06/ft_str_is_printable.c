/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:23:39 by hecho             #+#    #+#             */
/*   Updated: 2020/07/13 14:53:30 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!(c >= ' ' && c <= '~'))
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	char *str1;
	char *str2;

	str1 = "hi!";
	str2 = "hi\n";
	printf("%d\n", ft_str_is_printable(str1));
	printf("%d\n", ft_str_is_printable(str2));
}
