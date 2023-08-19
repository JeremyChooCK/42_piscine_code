/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:18:49 by jechoo            #+#    #+#             */
/*   Updated: 2023/08/11 15:41:35 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	temp;
	int	*result;

	i = 0;
	temp = min;
	result = malloc(sizeof(int) * (max - min));
	if (min >= max)
		return (0);
	while (temp < max)
	{
		temp++;
		i++;
	}
	temp = 0;
	while (temp < i)
	{
		result[temp] = min;
		min++;
		temp++;
	}
	return (result);
}
#include<stdio.h>
int main()
{
    int *range_array = ft_range(5, 30);
    if (range_array != NULL)
    {
        for (int i = 0; i < 25; i++)
            printf("%d ", range_array[i]);

        free(range_array);  // Don't forget to free the allocated memory
    }
    return 0;
}
