/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:08:04 by jechoo            #+#    #+#             */
/*   Updated: 2023/07/31 21:42:08 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

/*#include <stdio.h>

int main()
{
    char source[] = "He, World!"; // The source string
    char dest[20]; 

    unsigned int copied_len = ft_strlcpy(dest, source, sizeof(dest));

    printf("Source: %s\n", source);
    printf("Destination: %s\n", dest);
    printf("Copied Length: %u\n", copied_len);

    return 0;
}*/
