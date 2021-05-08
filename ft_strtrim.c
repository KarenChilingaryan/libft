/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 11:39:58 by kchiling          #+#    #+#             */
/*   Updated: 2021/01/27 21:18:30 by kchiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	startend(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char
	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	s;
	size_t	e;

	s = 0;
	while (s1[s] && startend(s1[s], set))
		s++;
	e = ft_strlen(s1);
	while (e > s && startend(s1[e - 1], set))
		e--;
	str = (char*)malloc(sizeof(*s1) * (e - s + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s < e)
		str[i++] = s1[s++];
	str[i] = 0;
	return (str);
}
