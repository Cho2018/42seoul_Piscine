# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/20 15:14:14 by hecho             #+#    #+#              #
#    Updated: 2020/07/20 15:22:00 by hecho            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

libft.a : ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
gcc -o libft.a ft_putchar.p ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

ft_putchar.o : ft.h ft_putchar.c
gcc -c ft_putchar.c

ft_swap.o : ft.h ft_swap.c
gcc -c ft_swap.c

ft_putstr.o : ft.h ft_putstr.c
gcc -c ft_putstr.c

ft_strlen.o : ft.h ft_strlen.c
gcc -c ft_strlen.c

ft_strcmp.o : ft.h ft_strcmp.c
gcc -c ft_strcmp.c
