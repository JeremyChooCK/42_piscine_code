/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:36:19 by jechoo            #+#    #+#             */
/*   Updated: 2023/08/07 16:52:27 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	while (dest[i] != '\0')
		i++;
	if (size <= i)
	{
		return (size);
	}
	j = 0;
	while (src[j] != '\0' && j < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	k = 0;
	while (src[k] != '\0')
		k++;
	return (k + size);
}
/*#include <stdio.h>
#include <string.h>
int main(void)
{
    char dest[20] = "Hello, ";
    char src[] = "world!";
    
    printf("Before ft_strlcat: dest = %s, src = %s\n", dest, src);
    ft_strlcat(dest, src, 20);
    printf("After ft_strlcat: dest = %s, src = %s\n", dest, src);
    
    return 0;
}*/
