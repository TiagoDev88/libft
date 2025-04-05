/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 21:13:47 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/04/05 19:09:02 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	char	convert_c;
	int		i;

	convert_c = (char) c;
	i = ft_strlen(s);
	while (s[i] >= 0)
	{
		if (s[i] == convert_c)
			return ((char *) &s[i]);
		i--;
	}
	if (s[i] == convert_c)
        return ((char *) &s[i]);
	return (NULL);
}
