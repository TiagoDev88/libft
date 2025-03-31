#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
	unsigned char *p;
	size_t  i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[50] = "This is a test string for bzero.";
	size_t i = 0;

    printf("Before ft_bzero: %s\n", buffer);

    ft_bzero(buffer, 10);

    printf("After ft_bzero: ");
   while (i <= 50)
    {
        {
			if (buffer[i] == '\0')
            	printf("\\0"); 
        	else
            	printf("%c", buffer[i]);
		}
		i++;
    }
    printf("\n");

    return 0;
}
*/