/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 11:22:45 by hecho             #+#    #+#             */
/*   Updated: 2020/07/15 11:23:59 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if (*to_find == '\0')
		return (&str[0]);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (1)
			{
				if (to_find[j] == '\0')
					return (&str[i]);
				if (str[i + j] != to_find[j])
					break ;
				j++;
			}
		}
		i++;
	}
	return (0);
}

int main()
{
	char str[20] = "abcd";
	char to_find[20] = "c";

	printf("%s\n", ft_strstr(str, to_find));
}
