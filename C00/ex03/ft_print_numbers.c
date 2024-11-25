/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabatist <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:44:28 by rabatist          #+#    #+#             */
/*   Updated: 2024/09/11 18:52:46 by rabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	c;

	c = '0';
	while (c <= '9')
	{
		write(1, &c, 1);
			c++;
	}
}
/*
int main(void)
{
	ft_print_numbers();
	return (0);
}
*/
