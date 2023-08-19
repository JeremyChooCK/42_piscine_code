/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 19:59:17 by jechoo            #+#    #+#             */
/*   Updated: 2023/07/31 13:20:37 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
    char str2[] = "HELLO";
    char str3[] = "123";
    char str4[] = "";

    printf("str1: %d\n", ft_str_is_uppercase(str1));
    printf("str2: %d\n", ft_str_is_uppercase(str2));
    printf("str3: %d\n", ft_str_is_uppercase(str3));
    printf("str4: %d\n", ft_str_is_uppercase(str4));

    return 0;
}*/
