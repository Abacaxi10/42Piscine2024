/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabatist <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:12:27 by rabatist          #+#    #+#             */
/*   Updated: 2024/09/11 18:57:53 by rabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)

{
	int	i;

	i = 0;
	while (*str++)
			i++;
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_strlen("fsdjkfdsbfdsu"));
	return (0);
}
*/
