/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabatist <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 22:39:28 by rabatist          #+#    #+#             */
/*   Updated: 2024/09/11 17:38:12 by rabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*dest;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	dest = malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	int	*j;
	int	i;

	j = ft_range(1, 33);
	i = 0;
	while (i < 32)
	{
		printf("%d,", j[i]);
		i++;
	}
	return (0);
}
*/
