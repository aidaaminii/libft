/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamini <aamini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:49:57 by aamini            #+#    #+#             */
/*   Updated: 2025/05/08 16:28:15 by aamini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = count * size;
	ptr = NULL;
	if (count == 0 || size == 0)
	{
		ptr = (void *)malloc(0);
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	if (INT_MAX < total_size)
		return (NULL);
	else
	{
		ptr = (void *)malloc(total_size);
		if (!ptr)
			return (NULL);
		ft_bzero(ptr, total_size);
		return (ptr);
	}
}
// #include <stdio.h>
// int main(void)
// {
// 	int size = 12;
// 	char *array = (char *)ft_calloc(size, 1);
// 	int i = 0;
// 	if(array)
// 	{
// 		while(i < size)
// 		{
// 			printf("%d", array[i]);
// 			i++;
// 		}
// 		printf("\nsize %d\n", i);
// 	}
// 	else
// 	{
// 		printf("%s" , "Failed");
// 	}
// 	return (0);
// }