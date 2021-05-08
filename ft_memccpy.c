/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 11:18:21 by kchiling          #+#    #+#             */
/*   Updated: 2021/01/22 17:12:35 by kchiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			count;
	unsigned char	*srcc;
	unsigned char	*dstc;

	count = 0;
	srcc = (unsigned char*)src;
	dstc = (unsigned char*)dst;
	if (n)
	{
		while (count < n)
		{
			dstc[count] = srcc[count];
			if (srcc[count] == (unsigned char)c)
				return (&dstc[count + 1]);
			count++;
		}
	}
	return (NULL);
}
