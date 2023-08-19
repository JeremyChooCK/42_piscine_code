/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:39:38 by jechoo            #+#    #+#             */
/*   Updated: 2023/08/10 16:49:22 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dupe;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dupe = malloc(sizeof(char) * i + 1);
	i = 0;
	while (src[i] != '\0')
	{
		dupe[i] = src[i];
		i++;
	}
	dupe[i] = '\0';
	return (dupe);
}
