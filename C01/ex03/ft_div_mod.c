/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 21:06:44 by jechoo            #+#    #+#             */
/*   Updated: 2023/07/29 07:08:04 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
    int dividend = 25;
    int divisor = 4;
    int result_division = 0;
    int result_modulus = 0;

    ft_div_mod(dividend, divisor, &result_division, &result_modulus);

    printf("Dividend: %d\n", dividend);
    printf("Divisor: %d\n", divisor);
    printf("Result of division: %d\n", result_division);
    printf("Result of modulus: %d\n", result_modulus);

    return 0;
}*/
