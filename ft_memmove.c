/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 09:43:33 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/04/04 16:57:27 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *p_d;
	unsigned char *p_s;

	if (!dest && !src)
		return (NULL);

	p_d = (unsigned char*)dest;
	p_s = (unsigned char*)src;

	
	if (p_d > p_s)
	{
		i = n;
		while (i > 0)
		{
			p_d[i] = p_s[i];
			--i;
		}
	}
	else 
	{
		i = 0;
		while(i < n)
	{
		p_d[i] = p_s[i];
		i++;
	}

	}
	return (dest);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
	char test1[11] = "ola 42";
	char test2[11] = "totobola";

	printf("%s\n%s\n", test1, test2);
	printf("Ponteiros\n%p\n%p\n", &test1, &test2);
	memmove(test2, test1, 5);
	printf("%s\n%s\n", test1, test2);
	printf("Ponteiros\n%p\n%p\n", &test1, &test2);
	return (0);
}