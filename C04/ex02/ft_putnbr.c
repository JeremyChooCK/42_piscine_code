/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:39:36 by jechoo            #+#    #+#             */
/*   Updated: 2023/08/12 09:05:14 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		mod;
	char	sign;

	sign = '-';
	if (nb < 0 && nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		write(1, &sign, 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	mod = (nb % 10) + '0';
	write(1, &mod, 1);
}

int main()
{
    int number = -2147483648;
    ft_putnbr(number);

    return 0;
}
