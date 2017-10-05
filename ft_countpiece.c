/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countpiece.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 13:45:56 by ckrommen          #+#    #+#             */
/*   Updated: 2017/10/05 14:05:07 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_countpiece(char *arr)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while(arr[i])
	{
		if (arr[i] == '.' || arr[i] == '#')
			count++;
		i++;
	}
	return (count /= 16);
}
