/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvogel <tvogel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 14:50:05 by tvogel            #+#    #+#             */
/*   Updated: 2020/11/30 12:33:12 by tvogel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			len(unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i + 1);
}

char		*ft_itoa(int n)
{
	char			*dest;
	unsigned int	length;
	unsigned int	nb;
	unsigned int	i;

	nb = (n < 0 ? -n : n);
	length = len(nb);
	i = 0;
	if (!(dest = (char *)malloc(sizeof(char) * length + 1 + (n < 0 ? 1 : 0))))
		return (NULL);
	if (n < 0)
	{
		dest[i] = '-';
		length++;
	}
	i = length - 1;
	while (nb >= 10)
	{
		dest[i] = nb % 10 + 48;
		nb /= 10;
		i--;
	}
	dest[i] = nb % 10 + 48;
	dest[length] = '\0';
	return (dest);
}
