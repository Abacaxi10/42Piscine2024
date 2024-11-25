/* ************************************************************************** */
/*                                                                            */
/*                                                      :::      ::::::::   */
/*   fr_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabatist <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:15:34 by rabatist          #+#    #+#             */
/*   Updated: 2024/09/11 18:53:35 by rabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
			c++;
	}
}
/*
int main(void)
{
	ft_print_alphabet();
		return (0);
}
*/
