/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:39:21 by jechoo            #+#    #+#             */
/*   Updated: 2023/08/15 20:58:07 by jechoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	fstrlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	clen(int size, char **strs, char *sep)
{
	int	i;
	int	clen;

	i = 0;
	clen = 0;
	while (i < size)
	{
		clen += fstrlen(strs[i]);
		i++;
	}
	clen += ((size - 1) * fstrlen(sep));
	return (clen);
}

int	addstr(char *result, char **strs, int temp, int i)
{
	int	j;

	j = 0;
	while (strs[i][j] != '\0')
	{
		result[temp] = strs[i][j];
		j++;
		temp++;
	}
	return (temp);
}

int	addsep(char *result, int temp, char *sep)
{
	int	j;

	j = 0;
	while (sep[j] != '\0')
	{
		result[temp] = sep[j];
		j++;
		temp++;
	}
	return (temp);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*result;
	int		temp;

	if (size < 1)
	{
		result = malloc(1);
		result[0] = '\0';
		return (result);
	}
	result = malloc(sizeof(char) * (clen(size, strs, sep) + 1));
	i = 0;
	temp = 0;
	while (i < size)
	{
		temp = addstr(result, strs, temp, i);
		if (i < size - 1)
			temp = addsep(result, temp, sep);
		i++;
	}
	result[temp] = '\0';
	return (result);
}
#include <stdio.h>
int	main()
{
	char *strs[] = {"hello", "friend"};
	printf("%s\n", ft_strjoin(2, strs, "my"));
}
