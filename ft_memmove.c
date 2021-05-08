/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 12:34:12 by kchiling          #+#    #+#             */
/*   Updated: 2021/01/19 12:34:21 by kchiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			count;
	unsigned char	*dsts;
	unsigned char	*srcs;

	count = 0;
	dsts = (unsigned char*)dst;
	srcs = (unsigned char*)src;
	if (src < dst)
	{
		len--;
		while ((int)len >= 0)
		{
			dsts[len] = srcs[len];
			len--;
		}
	}
	else
		while (count < len)
		{
			dsts[count] = srcs[count];
			count++;
		}
	return (dst);
}
