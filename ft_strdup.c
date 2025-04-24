/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamini <aamini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:36:13 by aamini            #+#    #+#             */
/*   Updated: 2025/04/24 14:54:32 by aamini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*copy;

	i = 0;
	size = 0;
	while (src[size] != '\0')
	{
		size ++;
	}
	copy = (char *)malloc(size + 1);
	if (!copy)
		return (0);
	while (i < size + 1)
	{
		copy[i] = src[i];
		i ++;
	}
	return (copy);
}
