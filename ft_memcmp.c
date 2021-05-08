/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 12:41:08 by kchiling          #+#    #+#             */
/*   Updated: 2021/01/20 16:29:24 by kchiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			count;
	unsigned char	temp;
	unsigned char	temp2;

	if (n == 0)
		return (0);
	count = 0;
	temp = ((unsigned char*)s1)[count];
	temp2 = ((unsigned char*)s2)[count];
	while ((count < n) && (temp == temp2))
	{
		temp = ((unsigned char*)s1)[count];
		temp2 = ((unsigned char*)s2)[count];
		count++;
	}
	return (temp - temp2);
}
