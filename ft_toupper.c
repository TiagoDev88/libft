#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = (c - 32);
		return (c);
	}
	else
		return (c);
}

/*
#include <stdio.h>
int main(void)
{
    printf("%c\n", ft_toupper('a')); // print 'A'
    printf("%c\n", ft_toupper('z')); // print 'Z'
    printf("%c\n", ft_toupper('A')); // print 'A' 
    return 0;
}
*/