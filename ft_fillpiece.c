/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 19:11:10 by ckrommen          #+#    #+#             */
/*   Updated: 2017/10/05 15:00:33 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

piece	*ft_build(int fd, char *av)
{
	piece	*new;
	char	*arr;

	arr = ft_filetoarr(fd, av);
	printf("%s\n", arr);
	new = ft_create(arr);
	new = ft_fill(arr, new);
	return (new);
}

int main(int ac, char **av)
{
	int fd;
	piece *new;

	if (ac != 2)
		printf("error\n");
	else
	{
		fd = open(*av, O_RDONLY);
		new = ft_fillpiece(fd, av[1]);
	while (new)
	{
		//for (int i = 0; i < 4; i++)
		//{
		//	for (int j = 0; j < 4; j++)
		//		printf("%d", (new->grid)[i][j]);
		//	printf("\n");
		//}
		printf("%d\n", new->row);
		new = new->next;
	}
	}
}
