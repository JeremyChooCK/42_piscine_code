/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:30:03 by jechoo            #+#    #+#             */
/*   Updated: 2023/07/31 13:37:48 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "this is a Test";
    char str3[] = "12345";
    char str4[] = "";

    printf("Original string: %s\n", str1);
    printf("Uppercase string: %s\n", ft_strupcase(str1));

    printf("Original string: %s\n", str2);
    printf("Uppercase string: %s\n", ft_strupcase(str2));

    printf("Original string: %s\n", str3);
    printf("Uppercase string: %s\n", ft_strupcase(str3));

    printf("Original string: %s\n", str4);
    printf("Uppercase string: %s\n", ft_strupcase(str4));

    return 0;
}*/
