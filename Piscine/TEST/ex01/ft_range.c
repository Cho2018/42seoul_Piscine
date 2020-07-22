/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 12:40:42 by hecho             #+#    #+#             */
/*   Updated: 2020/07/20 14:38:29 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *answer;

	if (min >= max)
		return (0);
	answer = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min + i < max)
	{
		answer[i] = min + i;
		i++;
	}
	return (answer);
}
