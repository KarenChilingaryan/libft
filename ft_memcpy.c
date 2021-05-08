/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 11:12:37 by kchiling          #+#    #+#             */
/*   Updated: 2021/01/19 11:14:11 by kchiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t count;

	count = 0;
	while (count < n)
	{
		((unsigned char*)dst)[count] = ((unsigned char*)src)[count];
		count++;
	}
	return (dst);
}
