/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:00:43 by jechoo            #+#    #+#             */
/*   Updated: 2023/08/08 12:58:10 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
		result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}
/*#include <stdio.h>
int	main()
{
	printf("%i", ft_recursive_power(4, 4));
}*/
