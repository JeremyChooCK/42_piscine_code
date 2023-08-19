/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 21:13:56 by jechoo            #+#    #+#             */
/*   Updated: 2023/07/29 09:30:42 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*int main(void)
{
    int a = 25;
    int b = 4;

    printf("Before ft_ultimate_div_mod:\n");
    printf("a: %d, b: %d\n", a, b);

    ft_ultimate_div_mod(&a, &b);

    printf("After ft_ultimate_div_mod:\n");
    printf("a: %d, b: %d\n", a, b);

    return 0;
}*/
