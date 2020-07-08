/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 17:09:20 by hecho             #+#    #+#             */
/*   Updated: 2020/07/08 13:53:31 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int a = 11;
	int b = 6;

	ft_ultimate_div_mod(&a, &b);

	printf("%d, %d\n", a, b);
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int x = *a;
	int y = *b;

	*a = x / y;
	*b = x % y;
}
