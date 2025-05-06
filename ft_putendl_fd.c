/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamini <aamini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:30:00 by aamini            #+#    #+#             */
/*   Updated: 2025/05/03 17:30:00 by aamini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int main(void)
// {
// 	// Write to stdout (terminal)
// 	ft_putendl_fd("Hello, world!", 1);
// 	ft_putendl_fd("This is a new line", 1);
// 	return (0);
// }
