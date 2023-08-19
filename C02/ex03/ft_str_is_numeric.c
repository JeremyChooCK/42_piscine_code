/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:56:27 by jechoo            #+#    #+#             */
/*   Updated: 2023/07/31 13:39:56 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
    char *str1 = "Hel3lo12World";
    char *str2 = "";

    // Test the ft_str_is_alpha function
    printf("\"%s\"only numbers:%d\n",str1,ft_str_is_numeric(str1));
    printf("\"%s\"non-number chars present%d\n",str2,ft_str_is_numeric(str2));

    return 0;
}*/
