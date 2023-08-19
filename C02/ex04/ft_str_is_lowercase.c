/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 19:33:27 by jechoo            #+#    #+#             */
/*   Updated: 2023/07/30 20:02:07 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((!(str[i] >= 'a' && str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int main() {
    char str1[] = "hello";
    char str2[] = "Hello";
    char str3[] = "123";
    char str4[] = "";

    printf("str1 is lowercase: %d\n", ft_str_is_lowercase(str1));
    printf("str2 is lowercase: %d\n", ft_str_is_lowercase(str2));
    printf("str3 is lowercase: %d\n", ft_str_is_lowercase(str3));
    printf("str4 is lowercase: %d\n", ft_str_is_lowercase(str4));

    return 0;
}*/
