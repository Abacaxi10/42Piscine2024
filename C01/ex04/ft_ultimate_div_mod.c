/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabatist <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 23:06:43 by rabatist          #+#    #+#             */
/*   Updated: 2024/09/11 18:56:15 by rabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	caca;
	int	pipi;

	caca = *a / *b;
	pipi = *a % *b;
	*a = caca;
	*b = pipi;
}
/*
#include <stdio.h>

int	main(void)
{
	int num1;
	int num2;
	int c;
	int d;

	num1 = 64;
	num2 = 10;
	ft_ultimate_div_mod(&num1, &num2);
	printf("%d, %d", num1, num2);
	return (0);
}
*/
