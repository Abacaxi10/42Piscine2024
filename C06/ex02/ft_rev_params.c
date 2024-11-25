/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabatist <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:38:15 by rabatist          #+#    #+#             */
/*   Updated: 2024/09/05 15:02:21 by rabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	j;

	j = argc - 1;
	while (j > 0)
	{
		ft_str(argv[j]);
		j--;
	}
	return (0);
}
