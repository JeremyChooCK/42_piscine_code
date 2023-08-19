/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:04:51 by jechoo            #+#    #+#             */
/*   Updated: 2023/08/07 15:49:18 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	minusc;
	int	result;

	i = 0;
	result = 0;
	minusc = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			minusc++;
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
			if (str[i + 1] < '0' || str[i + 1] > '9')
				break ;
		}
		if ((str[i] < '0' || str[i] > '9') && !(str[i] >= 9 && str[i] <= 13)
			&& str[i] != '-' && str[i] != '+' && str[i] != ' ')
			break ;
		i++;
	}
	if (minusc % 2 == 1)
		result = -result;
	return (result);
}
#include<stdio.h>
int	main()
{
	printf("%i",ft_atoi("	+- +--4567"));
}
