/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 12:17:58 by jechoo            #+#    #+#             */
/*   Updated: 2023/07/31 13:28:29 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*#include <stdio.h>

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "This is a test \t with tabs";
    char c[] = "";
    printf("is \"%s\" printable? %i\n", str1, ft_str_is_printable(str1));
    printf("Is \"%s\" printable? %i\n", str2, ft_str_is_printable(str2));
    printf("Is \"%s\" printable? %i\n", c, ft_str_is_printable(c));

    return 0;
}*/
