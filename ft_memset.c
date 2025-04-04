/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 21:13:08 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/04/04 21:13:08 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char    *p;
	size_t			i;

    p = (unsigned char *) b;
	i = 0;
    while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
    return (b);
}
