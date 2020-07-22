/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 18:29:56 by hecho             #+#    #+#             */
/*   Updated: 2020/07/22 10:03:53 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

void		ft_strcpy(char *dest, char *start, char *end)
{
	while (start < end)
	{
		*dest = *start;
		dest++;
		start++;
	}
	*dest = 0;
}

char		**ft_split(char *str, char *charset)
{
	long long	i;
	char		*start;
	char		**answer;

	answer = (char **)malloc(sizeof(char *) * word_count(str, charset) + 1);
	i = 0;
	while (*str)
	{
		if (!is_contain(*str, charset))
		{
			start = str;
			while (*str && !is_contain(*str, charset))
				str++;
			answer[i] = (char *)malloc(str - start + 1);
			ft_strcpy(answer[i++], start, str);
		}
		str++;
	}
	answer[i] = 0;
	return (answer);
}

void print_ho(char *src, char *charset)
{
	char **p = ft_split(src, charset);
	int i = -1;
	while (p[++i])
		printf("[%s]", p[i]);
	printf("\n");
}

int main()
{
	print_ho("a; b; c; d; e; ", "; ");
}
