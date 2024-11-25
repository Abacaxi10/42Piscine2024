/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabatist <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:25:23 by rabatist          #+#    #+#             */
/*   Updated: 2024/09/11 13:34:17 by rabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		(dest[i] = src[j]);
			i++;
			j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char str1[20] = "Salut ma ";
	char str2[20] = "Poule au chocolat";
	unsigned int n = 5;
	printf("%s", ft_strncat(str1, str2, n));
	return (0);
}
*/
