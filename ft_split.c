/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 16:14:46 by kchiling          #+#    #+#             */
/*   Updated: 2021/01/27 21:14:29 by kchiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		word_num(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			continue;
		}
		while (s[i] != c && s[i])
			i++;
		j++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**mas;
	int		i[4];

	i[0] = 0;
	i[3] = 0;
	i[1] = 0;
	mas = (char**)malloc((word_num(s, c) + 1) * sizeof(char*));
	mas[i[1]] = NULL;
	while (i[1] < word_num(s, c))
	{
		while (s[i[0]] == c)
			i[0]++;
		while (s[i[0]] != c)
		{
			i[0]++;
			i[3]++;
		}
		i[2] = 0;
		mas[i[1]] = (char*)malloc(i[3] + 1);
		while (i[3] > 0)
			mas[i[1]][i[2]++] = s[i[0] - i[3]--];
		mas[i[1]++][i[2]] = '\0';
	}
	mas[i[1]] = NULL;
	return (mas);
}
