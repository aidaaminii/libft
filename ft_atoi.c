/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamini <aamini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:50:38 by aamini            #+#    #+#             */
/*   Updated: 2025/05/06 15:33:29 by aamini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}

// #include <stdio.h> 
// #include "libft.h"  
// 	int	main(void)
// {
// 	char *str1 = "42";
// 	char *str2 = "    -123";
// 	char *str3 = "+4567";
// 	char *str4 = "   2147483647";
// 	char *str5 = "-2147483648";
// 	char *str6 = "   +0";
// 	char *str7 = "   00123";

// 	printf("str1: %d\n", ft_atoi(str1));
// 	printf("str2: %d\n", ft_atoi(str2));
// 	printf("str3: %d\n", ft_atoi(str3));
// 	printf("str4: %d\n", ft_atoi(str4));
// 	printf("str5: %d\n", ft_atoi(str5));
// 	printf("str6: %d\n", ft_atoi(str6));
// 	printf("str7: %d\n", ft_atoi(str7));

// 	return (0);
// }