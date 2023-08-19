/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yraynen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:34:00 by yraynen           #+#    #+#             */
/*   Updated: 2023/07/31 13:34:05 by yraynen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	placechar(char c)
{
	write(1, &c, 1);
}

void	placenbr(int a)
{
	int	temp;

	if (a > 9)
	{
		temp = a / 10 + '0';
		placechar(temp);
		temp = a % 10 + '0';
		placechar(temp);
	}
	else
	{
		placechar('0');
		placechar(a + '0');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (i < 99)
	{
		x = i +1;
		while (x < 100)
		{
			placenbr(i);
			write(1, " ", 1);
			placenbr(x);
			if (i != 98)
				write(1, ", ", 2);
			x++;
		}
		i++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
