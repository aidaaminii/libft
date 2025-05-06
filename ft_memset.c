/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamini <aamini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:51:50 by aamini            #+#    #+#             */
/*   Updated: 2025/04/30 19:00:00 by aamini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)b;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char str[50] = "Hello World!";
// 	printf("Before memset: %s\n", str);
//
// 	ft_memset(str + 5, '*', 5);
// 	printf("After ft_memset: %s\n", str);
//
// 	char str2[50] = "Hello World!";
// 	memset(str2 + 5, '*', 5);
// 	printf("After memset: %s\n", str2);
//
// 	return (0);
// }
