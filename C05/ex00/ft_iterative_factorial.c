/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 20:36:36 by jechoo            #+#    #+#             */
/*   Updated: 2023/08/08 10:58:02 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb != 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*#include <stdio.h>
int	main()
{
	printf("%i", ft_iterative_factorial(-3));
}*/
