/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabatist <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:52:51 by rabatist          #+#    #+#             */
/*   Updated: 2024/09/02 15:39:37 by rabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	a;
	int	i;

	a = 1;
	i = 2;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		a = a * i;
		i++;
	}
	return (a);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_factorial(12));
}
*/
