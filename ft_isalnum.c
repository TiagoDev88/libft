#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
int main(void)
{
    char test1 = 'a';
    char test2 = 'Z';
    char test3 = '5';
    char test4 = '@';
    char test5 = ' ';

    printf("ft_isalnum('%c') = %d\n", test1, ft_isalnum(test1)); // Expected: 1
    printf("ft_isalnum('%c') = %d\n", test2, ft_isalnum(test2)); // Expected: 1
    printf("ft_isalnum('%c') = %d\n", test3, ft_isalnum(test3)); // Expected: 1
    printf("ft_isalnum('%c') = %d\n", test4, ft_isalnum(test4)); // Expected: 0
    printf("ft_isalnum('%c') = %d\n", test5, ft_isalnum(test5)); // Expected: 0

    return 0;
}
*/