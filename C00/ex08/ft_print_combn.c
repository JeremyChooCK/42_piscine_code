/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yraynen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:49:47 by yraynen           #+#    #+#             */
/*   Updated: 2023/07/30 14:50:44 by yraynen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	placechar(char c)
{
	write (1, &c, 1);
}

void	writedata(char *data, int n)
{
	int	j;

	j = 0;
	while (j < n)
	{
		placechar(data[j]);
		j++;
	}
	if (data[0] != (10 - n) + '0')
	{
		placechar(',');
		placechar(' ');
	}
}

void	calcombi(char *data, int i, int index, int n)
{
	if (index == n)
	{
		writedata(data, n);
		return ;
	}
	while (i < 10 && 10 - i >= n - index)
	{
		data[index] = i + '0';
		calcombi(data, i + 1, index + 1, n);
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	data[10];

	if (n > 0 && n < 10)
	{
		calcombi(data, 0, 0, n);
	}
}
/*
int	main(void)
{
	ft_print_combn(3);
	return (0);
}*/
