/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:04:31 by jechoo            #+#    #+#             */
/*   Updated: 2023/08/08 13:28:14 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	result = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index > 1)
		result = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (result);
}
/*#include <stdio.h>
int	main()
{
	printf("%i",ft_fibonacci(8));
}*/
