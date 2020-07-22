/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:10:50 by hecho             #+#    #+#             */
/*   Updated: 2020/07/15 14:44:18 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_valid(char *base)
{
	int i;
	int j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	rec(unsigned int n, char *base, int base_num)
{
	if (n >= (unsigned int)base_num)
	{
		rec(n / base_num, base, base_num);
		rec(n % base_num, base, base_num);
	}
	else
		write(1, &base[n], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	n;
	int			len;

	if (!is_valid(base))
		return ;
	len = 0;
	while (base[len] != '\0')
		len++;
	n = nbr;
	if (nbr < 0)
	{
		n = n * (-1);
		write(1, "-", 1);
	}
	rec(n, base, len);
}
