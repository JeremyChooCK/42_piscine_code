/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:22:35 by jechoo            #+#    #+#             */
/*   Updated: 2023/07/30 18:30:36 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int main()
{
    char *str1 = "HelloWorld";
    char *str2 = "Hel123lo";

    // Test the ft_str_is_alpha function
    printf("\"%s\"only alphabetical character:%d\n",str1,ft_str_is_alpha(str1));
    printf("\"%s\"non-alphabetical character:%d\n",str2,ft_str_is_alpha(str2));

    return 0;
}*/
