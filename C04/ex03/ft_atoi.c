/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabatist <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:38:55 by rabatist          #+#    #+#             */
/*   Updated: 2024/09/12 17:22:03 by rabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	signe;

	i = 0;
	j = 0;
	signe = 1;
	while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v')
		|| (str[i] == '\f') || (str[i] == '\r') || (str[i] == ' '))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			signe = -signe;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		j = j * 10 + (str[i] - '0');
			i++;
	}
	return (j * signe);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_atoi("--++123"));
	return (0);
}
*/
