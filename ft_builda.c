/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_builda.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qponcele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 19:46:29 by qponcele          #+#    #+#             */
/*   Updated: 2017/10/05 19:57:22 by qponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_builda(int fd, char *av)
{
	int		i;
	int		row;
	int 	col;
	char	array[104][104];

	row = 0;
	open(fd, av);
	while (read(fd, &buf, 1)) //while buff != \n
	{


