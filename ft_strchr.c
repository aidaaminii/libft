/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamini <aamini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:51:57 by aamini            #+#    #+#             */
/*   Updated: 2025/04/30 15:21:07 by aamini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0' )
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main ()
// {
//     printf("%s" , ft_strchr("jojo bala", 'a'));
//     return 0;
// }