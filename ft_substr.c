/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvogel <tvogel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 14:08:38 by tvogel            #+#    #+#             */
/*   Updated: 2020/11/26 14:36:29 by tvogel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*dest;

	j = 0;
	dest = (char *)s;
	if (!s || len <= 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (!(dest = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[start] && j < len)
	{
		if (j < len)
		{
			dest[j] = s[start];
			j++;
		}
		start++;
	}
	dest[j] = 0;
	return (dest);
}
