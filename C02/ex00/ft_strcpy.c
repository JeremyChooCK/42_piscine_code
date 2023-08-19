/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:39:46 by jechoo            #+#    #+#             */
/*   Updated: 2023/08/01 09:29:01 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>

int main()
{
    char source[] = "Hello, this is the source string.";
    char destination[100];

    // Testing the ft_strcpy function
    printf("Source string: %s\n", source);
    ft_strcpy(destination, source);

    // Print the copied string
    printf("Copied string: %s\n", destination);

    return 0;
}*/
