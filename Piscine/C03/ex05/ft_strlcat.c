/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 11:24:43 by hecho             #+#    #+#             */
/*   Updated: 2020/07/15 11:26:26 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int dest_size;
	unsigned int src_size;

	dest_size = 0;
	while (dest[dest_size] != '\0')
		dest_size++;
	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	if (size < dest_size)
		return (src_size + size);
	i = 0;
	dest--;
	while (*src && i < ((long long)size - dest_size - 1))
	{
		*dest = *src;
		i++;
		dest++;
		src++;
	}
	*dest = '\0';
	return (src_size + dest_size);
}

int main()
{
	char dest1[20] = "abc";
	char dest2[20] = "abc";
	char src[] = "123";
	unsigned int size = 2;

	printf("%u\n%s\n%lu\n%s\n", ft_strlcat(dest1, src, size), dest1, 
			strlcat(dest2, src, size), dest2);
}
