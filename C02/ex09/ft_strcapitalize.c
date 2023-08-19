/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:47:54 by jechoo            #+#    #+#             */
/*   Updated: 2023/07/31 21:31:05 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((str[i - 1] < 'a' || str[i -1] > 'z')
				&& (str[i - 1] < 'A' || str[i - 1] > 'Z')
				&& (str[i - 1] < '0' || str[i - 1] > '9'))
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int main() {
    char str1[] = "salut,comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char str2[] = "this is a test";
    char str3[] = "12345";
    char str4[] = "hello_world";

    printf("Original string: %s\n", str1);
    printf("Capitalized string: %s\n", ft_strcapitalize(str1));

    printf("Original string: %s\n", str2);
    printf("Capitalized string: %s\n", ft_strcapitalize(str2));

    printf("Original string: %s\n", str3);
    printf("Capitalized string: %s\n", ft_strcapitalize(str3));

    printf("Original string: %s\n", str4);
    printf("Capitalized string: %s\n", ft_strcapitalize(str4));

    return 0;
}*/
