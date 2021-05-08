/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 12:50:47 by kchiling          #+#    #+#             */
/*   Updated: 2021/01/27 21:15:12 by kchiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	count;

	count = 0;
	if (!s)
		return (NULL);
	while (s[count] && s[count] != c)
		count++;
	if (s[count] && s[count] == c)
		return ((char*)(s + count));
	else if (s[count] == (char)c)
		return ((char*)(s + count));
	else
		return (NULL);
}
