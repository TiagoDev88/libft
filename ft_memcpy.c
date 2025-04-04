/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:32:40 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/04/04 10:26:27 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned	char *p_dest;
	unsigned	char *p_src;
	size_t 		i;

	if (!dest && !src)
		return (NULL);
	
	p_dest = (unsigned char *) dest;
	p_src = (unsigned char *) src;

	i = 0;
	while(i < n)
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return (dest);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main()
{

char str1[7] = "abcdef";
   printf( "The string: %s\n", str1 );
   memcpy( (str1+6), str1, 10 );
   printf( "New string: %s\n", str1 );

   //strcpy_s( str1, sizeof(str1), "aabbcc" );   // reset string


   /*printf("\nstr1: %s\n", str1);
   printf( "The string: %s\n", str1 );
   memmove( (str1+6), str1, 10 );
   printf( "New string: %s\n", str1 );
*/
}
