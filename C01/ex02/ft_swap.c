/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabatist <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 21:43:40 by rabatist          #+#    #+#             */
/*   Updated: 2024/09/11 18:55:06 by rabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)

{
	int	caca;

	caca = *a;
	*a = *b;
	*b = caca;
}
/*
#include <stdio.h>

int main()
{
	int x = 5;
	int y = 10;

	ft_swap(&x, &y);

	printf("%d, %d" , x, y);

	return (0);
}
*/
