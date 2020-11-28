/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvogel <tvogel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 19:19:02 by tvogel            #+#    #+#             */
/*   Updated: 2020/11/26 20:36:14 by tvogel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *temp;

	if (alst == NULL || new == NULL)
		return ;
	temp = *alst;
	if (temp == NULL)
		*alst = new;
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
}
