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

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[50] = "This is a test string for memset.";

    printf("Before ft_memset: %s\n", buffer);

    ft_memset(buffer, '*', 10);

    printf("After ft_memset: %s\n", buffer);

    return 0;
}
*/