/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:55:20 by kchiling          #+#    #+#             */
/*   Updated: 2021/01/27 21:09:05 by kchiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	size_t			i;

	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(unsigned char*)(ptr + i) = (unsigned char)c;
		i++;
	}
	return (ptr);
}
