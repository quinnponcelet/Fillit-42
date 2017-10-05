/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filetoarr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 19:02:45 by ckrommen          #+#    #+#             */
/*   Updated: 2017/10/05 13:12:43 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_filetoarr(int fd, char *av)
{
	char	*str;
	int		i;
	char	buf;
	char	c;

	i = 0;
	while (read(fd, &buf, 1))
		i++;
	str = malloc(sizeof(char) * (i + 1));
	close(fd);
	fd = open(av, O_RDONLY);
	i = 0;
	while (read(fd, &c, 1))
	{
		str[i] = c;
		i++;
	}
	close(fd);
	return (str);
}
