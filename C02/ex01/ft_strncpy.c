/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:05:58 by jechoo            #+#    #+#             */
/*   Updated: 2023/07/31 21:45:16 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <stdio.h>

int main()
{
    char source[] = "Hello, this is the source string.";
    char destination[100];

    // Testing the ft_strncpy function
    unsigned int n = 10; // Number of characters to copy

    // Call the function
    ft_strncpy(destination, source, n);

    // Null-terminate the destination string manually
    destination[n] = '\0';

    // Print the copied string
    printf("Copied string: %s\n", destination);

    return 0;
}*/
