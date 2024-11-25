/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabatist <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:49:33 by rabatist          #+#    #+#             */
/*   Updated: 2024/09/02 16:12:38 by rabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	a;

	i = 2;
	a = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
		return (1);
	while (i <= power)
	{
		nb = nb * a;
		i++;
	}
	return (nb);
}
