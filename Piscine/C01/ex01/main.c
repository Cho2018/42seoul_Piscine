/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 16:54:19 by hecho             #+#    #+#             */
/*   Updated: 2020/07/08 13:41:08 by hecho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

int main()
{
	int a;
	char arr[3];

	arr[1] = ' ';
	arr[2] = '\n';

	a = 1;

	int *p1 = &a;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	int *********p9 = &p8;

	ft_ultimate_ft(p9);

	arr[0] = a / 10 + 48;
	write(1, arr, 1);
	arr[0] = a % 10 + 48;
	write(1, arr, 3);
}

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
