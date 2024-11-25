/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabatist <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:04:37 by rabatist          #+#    #+#             */
/*   Updated: 2024/09/11 13:30:06 by rabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((char)s1[i] - (char)s2[i]);
		i++;
	}
	if ((s1[i] == '\0' && s2[i] != '\0') || (s1[i] != '\0' && s2[i] == '\0'))
		return ((char)s1[i] - (char)s2[i]);
	return (0);
}
/*
#include <stdio.h>
int    main(void)
{
    char s1[] = "Hello";
    char s2[] = "Hell";
	printf("%d", ft_strcmp(s1, s2));
    return (0);
}
*/
