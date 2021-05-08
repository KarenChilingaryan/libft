/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 12:39:51 by kchiling          #+#    #+#             */
/*   Updated: 2021/01/19 12:40:00 by kchiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t count;

	count = 0;
	while (count < n)
	{
		if (((unsigned char*)s)[count] == (unsigned char)c)
			return (&((unsigned char*)s)[count]);
		else
			count++;
	}
	return (NULL);
}
