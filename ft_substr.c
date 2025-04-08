/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 21:00:55 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/04/08 15:14:52 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	length;
	char	*ptr;

	length = ft_strlen(s);
	if (start > length)
	{
		ptr = malloc(sizeof(char));
		if (!ptr)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	if ((start + len) > length)
		len = (length - start);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, (s + start), len);
	ptr[len] = '\0';
	return (ptr);
}
