/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvogel <tvogel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 14:50:05 by tvogel            #+#    #+#             */
/*   Updated: 2020/11/28 16:45:53 by tvogel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		len(int n)
{
	int length;

	length = 0;
	if (n < 0)
	{
		n = n * -1;
		length++;
	}
	while (n > 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		nb;
	int		i;
	int		length;

	nb = (n < 0 ? -n : n);
	length = len(n);
	i = 0;
	if (!(dest = malloc(sizeof(char) * length + 1 + (n < 0 ? 1 : 0))))
		return (NULL);
	if (n < 0)
		dest[i] = '-';
	i = length;
	while (n >= 10)
	{
		dest[i] = nb % 10 + '0';
		nb /= 10;
		i--;
	}
	dest[i] = nb % 10 + '0';
	dest[length] = '\0';
	return (dest);
}
