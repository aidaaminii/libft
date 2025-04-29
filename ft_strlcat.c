/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamini <aamini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:52:01 by aamini            #+#    #+#             */
/*   Updated: 2025/04/29 17:04:49 by aamini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;

	dest_size = 0;
	src_size = 0;
	i = 0;
	while (dest[dest_size] != '\0')
		dest_size++;
	while (src[src_size] != '\0')
		src_size++;
	if (size <= dest_size)
		return (size + src_size);
	while (src[i] != '\0' && (dest_size + i) < (size -1))
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest_size + src_size);
}
// #include <stdio.h>
// int   main()
// {
// 	printf( "%u \n" , ft_strlcat("Hello World! jj","World" , 3));
// 	printf( "%u \n" , ft_strlcat("bananananana test","nana " , 1));
// 	printf( "%u \n" , ft_strlcat("&4    ') dogk!","World" , 10));
// 	return (0);
// }