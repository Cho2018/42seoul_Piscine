/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 17:05:43 by hecho             #+#    #+#             */
/*   Updated: 2020/07/13 10:07:36 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 21;
	b = 6;
	div = 0;
	mod = 0;

	ft_div_mod(a, b, &div, &mod);
	printf("%d, %d\n", div, mod);
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
