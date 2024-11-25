/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabatist <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 22:16:20 by rabatist          #+#    #+#             */
/*   Updated: 2024/09/11 18:55:42 by rabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	if (b != 0)
	{
	*div = a / b;
	*mod = a % b;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	rest;

	a = 30;
	b = 7;
	ft_div_mod(a, b, &div, &rest);
	printf("%d, %d, %d, %d", a, b, div, rest);
	return (0);
}
*/
