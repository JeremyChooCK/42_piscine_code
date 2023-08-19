/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:40:28 by jechoo            #+#    #+#             */
/*   Updated: 2023/07/31 14:37:59 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "This Is A Test";
    char str3[] = "12345";
    char str4[] = "";

    printf("Original string: %s\n", str1);
    printf("Lowercase string: %s\n", ft_strlowcase(str1));

    printf("Original string: %s\n", str2);
    printf("Lowercase string: %s\n", ft_strlowcase(str2));

    printf("Original string: %s\n", str3);
    printf("Lowercase string: %s\n", ft_strlowcase(str3));

    printf("Original string: %s\n", str4);
    printf("Lowercase string: %s\n", ft_strlowcase(str4));

    return 0;
}*/
