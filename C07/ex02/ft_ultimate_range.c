/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabatist <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:08:45 by rabatist          #+#    #+#             */
/*   Updated: 2024/09/11 17:37:46 by rabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	size = max - min;
	*range = malloc(sizeof(int) * size);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*arr;
	int	i;

	arr = 0;
	i = ft_ultimate_range(&arr, 1, 10);
	printf("%d\n", i);
	return (0);
}
*/
