#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = (c + 32);
		return (c);
	}
	else
		return (c);
}

/*
#include <stdio.h>
int main(void)
{
    printf("%c\n", ft_tolower('A')); // print 'a'
    printf("%c\n", ft_tolower('Z')); // print 'z'
    printf("%c\n", ft_tolower('a')); // print 'a' 
    return 0;
}
*/