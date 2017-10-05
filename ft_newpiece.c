/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newpiece.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 13:22:05 by ckrommen          #+#    #+#             */
/*   Updated: 2017/10/05 13:22:23 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

piece   *ft_newpiece()
{
    piece   *new;

    if (!(new = (piece *)malloc(sizeof(piece))))
        return (NULL);
    new->row = 0;
    new->col = 0;
    new->next = NULL;
    return (new);
}
