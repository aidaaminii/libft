/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamini <aamini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:49:57 by aamini            #+#    #+#             */
/*   Updated: 2025/04/28 18:49:34 by aamini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;
	int		multiply;
	size_t	new_multiply;

	multiply = count * size;
	new_multiply = multiply;
	ptr = NULL;
	if (count == 0 || size == 0)
		return (NULL);
	total_size = count * size;
	if (total_size != new_multiply)
		return (NULL);
	else
	{
		ptr = (void *)malloc(total_size);
		if (!ptr)
		{
			return (NULL);
		}
		ft_bzero(ptr, total_size);
		return (ptr);
	}
}

// #include <stdio.h>
// int main(void)
// {
// 	char *array = (char *)ft_calloc(21263541325, 8);
// 	int i = 0;
// 	if(array)
// 	{
// 		while(i < 32)
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