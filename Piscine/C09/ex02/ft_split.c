/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 18:29:56 by hecho             #+#    #+#             */
/*   Updated: 2020/07/20 18:50:32 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			is_contain(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

long long	word_count(char *str, char *charset)
{
	long long count;

	count = 0;
	while (*str)
	{
		if (!is_contain(*str, charset))
		{
			count++;
			while (*str && !is_contain(*str, charset))
				str++;
		}
		str++;
	}
	return (count);
}

void		ft_strcpy(char *dest, char *from, char *until)
{
	while (from < until)
		*(dest++) = *(from++);
	*dest = 0;
}

char		**ft_split(char *str, char *charset)
{
	long long	i;
	char		**answer;
	char		*from;

	answer = (char **)malloc(sizeof(char *) * word_count(str, charset) + 1);
	i = 0;
	while (*str)
	{
		if (!is_contain(*str, charset))
		{
			from = str;
			while (*str && !is_contain(*str, charset))
				str++;
			answer[i] = (char *)malloc(str - from + 1);
			ft_strcpy(answer[i++], from, str);
		}
		str++;
	}
	answer[i] = 0;
	return (answer);
}
