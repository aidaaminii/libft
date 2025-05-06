/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamini <aamini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:51:41 by aamini            #+#    #+#             */
/*   Updated: 2025/04/23 15:21:33 by aamini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

// int main()
// {
// 	char src[] = "Hello World!";
// 	char dst[50];
// 	
// 	ft_memcpy(dst, src, strlen(src) + 1);
// 	printf("After ft_memcpy: %s\n", dst);
// 	
// 	char dst2[50];
// 	memcpy(dst2, src, strlen(src) + 1);
// 	printf("After memcpy: %s\n", dst2);
// 	
// 	return (0);
// }
