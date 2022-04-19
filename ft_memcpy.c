/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyap <alyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:58:56 by alyap             #+#    #+#             */
/*   Updated: 2022/04/16 15:58:58 by alyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t  i;
	unsigned char *srcptr = (unsigned char *)src;
	unsigned char *dstptr = (unsigned char *)dst;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		dstptr[i] = srcptr[i];
		i++; 
	}
	return (dst);
}
