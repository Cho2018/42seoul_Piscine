/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 19:00:28 by hecho             #+#    #+#             */
/*   Updated: 2020/07/13 13:50:58 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main()
{
	char dest[100];
	char *src;

	src = "Hello Bye";
	ft_strncpy(dest, src, 3);
	printf("%s\n", dest);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				check;

	i = 0;
	check = 0;
	while (i < n)
	{
		if (src[i] == '\0' || check == 1)
		{
			dest[i] = '\0';
			check = 1;
		}
		else
			dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
