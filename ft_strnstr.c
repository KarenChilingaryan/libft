/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 11:18:53 by kchiling          #+#    #+#             */
/*   Updated: 2021/01/20 11:18:59 by kchiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t j;
	size_t i;

	if (!*find)
		return ((char*)str);
	j = 0;
	while (str[j] != '\0' && (size_t)j < len)
	{
		if (str[j] == find[0])
		{
			i = 1;
			while (find[i] != '\0' && str[j + i] == find[i] &&
					(size_t)(j + i) < len)
				++i;
			if (find[i] == '\0')
				return ((char*)&str[j]);
		}
		++j;
	}
	return (0);
}
