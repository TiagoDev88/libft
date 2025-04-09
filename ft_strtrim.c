/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfilipe- <tfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 21:00:12 by tfilipe-          #+#    #+#             */
/*   Updated: 2025/04/09 17:48:22 by tfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	validate_set(char c, char const *set)
{
	while(*set)
	{
		if (c == *set)
			return (1);
		set++;	
	}
	return (0);
}
/**
 * @brief Trims characters from the beginning and end of a string.
 * 
 * @param s1 The string to trim.
 * @param set The set of characters to trim.
 * @return char* The trimmed string.
 */
char *ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	index;
	size_t 	l_index;
	size_t	total;
	size_t 	i;

	i = 0;
	index = 0;
	l_index = (ft_strlen(s1) - 1);

	while (s1[index] && validate_set(s1[index], set))
		index++;
	while (s1[index] && validate_set(s1[l_index], set))
		l_index--;
	total = (l_index - index) + 1;
	ptr = malloc(sizeof(char) * total + 1);
	if (!ptr)
		return (NULL);
	/*while (index <= l_index)
	{
		ptr[i] = s1[index];
		index++;
		i++;
	}*/
	ptr = ft_memcpy(ptr, &s1[index], ((l_index - index) + 1));
	ptr[total + 1] = '\0';

	return (ptr);
}
/*
#include <stdio.h>

int main(void)
{
	char s1[] = "!,!ola 42 !,!";
	char set[] = ",!";
	char *test;
	
	test =ft_strtrim(s1, set);
	printf("%s\n", test);
	return (0);
}*/