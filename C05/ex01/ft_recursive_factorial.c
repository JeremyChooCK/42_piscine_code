/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:59:21 by jechoo            #+#    #+#             */
/*   Updated: 2023/08/08 11:41:20 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		result = nb * ft_recursive_factorial(nb - 1);
	}
	return (result);
}
/*#include<stdio.h>
int	main()
{
	printf("%i", ft_recursive_factorial(5));
}*/
