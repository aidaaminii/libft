/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamini <aamini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:51:02 by aamini            #+#    #+#             */
/*   Updated: 2025/04/28 18:49:05 by aamini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;
	
	str = (char*)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

// #include <stdio.h> 
// #include <string.h> 
// #include <strings.h> 
// int main(void)
// {
//     char str[20] = "Hello, World!";
//     printf("Before bzero: %s\n", str);

//     bzero(str + 5, 5); 

//     printf("After bzero: ");
//     for (int i = 0; i < 20; i++)
//     {
//         if (str[i])
//             printf("%c", str[i]);
//         else
//             printf("\\0");
//     }
//     printf("\n");

//     return (0);
// }