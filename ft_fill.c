/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 14:27:47 by ckrommen          #+#    #+#             */
/*   Updated: 2017/10/05 15:30:17 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

piece	*ft_fill(char *arr, piece *new)
{
	piece	*ptr;
	int		row;
	int		col;
	int 	i;

	row = 0;
	col = 0;
	i = 0;
	ptr = new;
	arr[i] = '0';
	while (*arr)
	{
		col = 0;
		if (*arr == '\n')
			new = ptr;
		while (i < 4)
		{
			(new->grid)[col][row] = *arr;
			arr++;
			i++;
		}
	}
	return (ptr);
}
