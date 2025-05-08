/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamini <aamini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:35:00 by aamini            #+#    #+#             */
/*   Updated: 2025/05/08 17:13:41 by aamini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	buffer[12];
	int		i;
	long	num;

	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = -num;
	}
	i = 0;
	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}
	while (--i >= 0)
	{
		ft_putchar_fd(buffer[i], fd);
	}
}

// int main(void)
// {
// 	// Write to stdout (terminal)
// 	ft_putnbr_fd(2147483647, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(-2147483648, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(0, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(-6516541, 1);
// 	return (0);
// }