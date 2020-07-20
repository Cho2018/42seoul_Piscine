# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hecho <hecho@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/20 15:14:14 by hecho             #+#    #+#              #
#    Updated: 2020/07/20 18:24:24 by hecho            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c Wall Wextra Werror ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rc libft.a ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
