/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 18:12:46 by kchiling          #+#    #+#             */
/*   Updated: 2021/01/21 19:50:35 by kchiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		i;
	int		j;

	dest = NULL;
	if (!s1 || !s2)
		return (NULL);
	dest = malloc(1 + (ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	i = 0;
	j = 0;
	while (s1[i] || s2[j])
	{
		if (s1[i])
		{
			dest[i] = s1[i];
			i++;
		}
		else
		{
			dest[i + j] = s2[j];
			j++;
		}
	}
	dest[i + j] = '\0';
	return (dest);
}
