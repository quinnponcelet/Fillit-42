/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 13:24:07 by ckrommen          #+#    #+#             */
/*   Updated: 2017/10/05 14:59:17 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

piece	*ft_create(char *arr)
{
	int		 i;
	piece	*new;
	piece	*ptr;

	i = ft_countpiece(arr);
	new = ft_newpiece();
	ptr = new;
	while (--i > 0)
	{
		new->next = ft_newpiece();
		new = new->next;
	}
	return (ptr);
}
