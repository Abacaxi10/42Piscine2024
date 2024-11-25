/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabatist <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 20:33:14 by rabatist          #+#    #+#             */
/*   Updated: 2024/09/05 13:48:32 by rabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return ((char)s1[i] - (char)s2[i]);
		i++;
	}
	if ((s1[i] == '\0' && s2[i] != '\0' && i < n)
		|| (s1[i] != '\0' && s2[i] == '\0' && i < n))
		return ((char)s1[i] - (char)s2[i]);
	return (0);
}
/*
#include <stdio.h>
int    main(void)
{
    char s1[] = "Hello";
    char s2[] = "Hello";

	unsigned int n = 3;
    printf("%d", ft_strncmp(s1, s2, n));
	return (0);
}
*/
