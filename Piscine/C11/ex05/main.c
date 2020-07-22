/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 19:24:57 by hecho             #+#    #+#             */
/*   Updated: 2020/07/22 12:56:20 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

int		(*g_op[100])(int, int);

void	ft_setting(void)
{
	g_op['+'] = sum;
	g_op['-'] = sub;
	g_op['*'] = mul;
	g_op['/'] = div;
	g_op['%'] = mod;
}

int		main(int ac, char **av)
{
	int		v1;
	int		v2;
	char	op;

	ft_setting();
	if (ac != 4)
		return (0);
	op = *av[2];
	if (!(op == '+' || op == '-' || op == '*' || op == '/' || op == '%'))
	{
		write(1, "0\n", 2);
		return (0);
	}
	v1 = ft_atoi(av[1]);
	v2 = ft_atoi(av[3]);
	if (v2 == 0 && op == '/')
		write(1, "Stop : division by zero\n", 24);
	else if (v2 == 0 && op == '%')
		write(1, "Stop : modulo by zero\n", 22);
	else
	{
		ft_putnbr(g_op[(int)op](v1, v2));
		write(1, "\n", 1);
	}
	return (0);
}
