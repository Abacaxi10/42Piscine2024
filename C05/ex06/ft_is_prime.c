/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabatist <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:45:30 by rabatist          #+#    #+#             */
/*   Updated: 2024/09/10 15:10:06 by rabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 1 || nb == 0 || nb < 0)
		return (0);
	while (i <= nb - 1)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;

	a = ft_is_prime(5);
	printf("%d", a);
}
*/
