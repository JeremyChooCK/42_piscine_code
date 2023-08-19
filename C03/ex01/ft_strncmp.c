/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 09:35:07 by jechoo            #+#    #+#             */
/*   Updated: 2023/08/02 19:39:56 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "he";
    char str2[] = "hea";

    unsigned int n = 4;
    int result1 = ft_strncmp(str1, str2, n);
    int result2 = strncmp(str1, str2, n);

    printf("ft_strncmp result 1: %d\n", result1); 
    printf("strncmp result 2: %d\n", result2);

    return 0;
}*/
