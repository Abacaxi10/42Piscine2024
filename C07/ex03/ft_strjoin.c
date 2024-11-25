/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabatist <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:29:39 by rabatist          #+#    #+#             */
/*   Updated: 2024/09/11 19:36:36 by rabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char *ft_strjoin(int size, char **strs, char *sep)
{
	if (size <= 0)
	{
		char	*vide;

		vide = malloc(1);
		return (vide);
	}

	int	total_len;
	int j;
	int	i;
	int	a;
	char	*total;

	total_len = 0;
	j = 0;
	i = 0;
	while (sep[j])
	{
		j++;
	}
	while (i < size)
	{
		int	str_len;

		str_len = 0;
		while (strs[i][str_len])
		{
			str_len++;
		}
		total_len += str_len;
		i++;
	}
	total_len += j * (size - 1);
	total = malloc(sizeof(char)) * total_len;
}
