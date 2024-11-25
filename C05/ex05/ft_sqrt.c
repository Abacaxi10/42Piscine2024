/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabatist <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:55:57 by rabatist          #+#    #+#             */
/*   Updated: 2024/09/02 20:47:09 by rabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		return (0);
	}
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d",ft_sqrt(49));
	return (0);
}
*/
