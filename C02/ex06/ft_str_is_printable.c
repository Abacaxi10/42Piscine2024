/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabatist <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 21:23:47 by rabatist          #+#    #+#             */
/*   Updated: 2024/09/01 20:50:29 by rabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	print;
	int	i;

	print = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] > 126))
		{
			print = 0;
		}
		i++;
	}
	return (print);
}
/*
#include <stdio.h>

int	ft_str_is_printable(char *str);

int main ()
{
	char *str1 = "Hello)(^$%*()?><World!";
	char *str2 = "Hello\n\t\v\fWorld";
	char *str3 = "";

	printf("\"%s\": %d\n", str1, ft_str_is_printable(str1));
	printf("\"%s\": %d\n", str2, ft_str_is_printable(str2));
	printf("\"%s\": %d\n", str3, ft_str_is_printable(str3));

	return (0);
}
*/
