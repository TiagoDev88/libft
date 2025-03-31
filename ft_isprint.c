#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
int main(void)
{
    char test1 = 'A';  // Printable character
    char test2 = ' ';  // Printable space
    char test3 = '~';  // Printable character
    char test4 = '\n'; // Non-printable character
    char test5 = 127;  // Non-printable character (DEL)

    printf("ft_isprint('%c') = %d\n", test1, ft_isprint(test1)); // Expected: 1
    printf("ft_isprint('%c') = %d\n", test2, ft_isprint(test2)); // Expected: 1
    printf("ft_isprint('%c') = %d\n", test3, ft_isprint(test3)); // Expected: 1
    printf("ft_isprint('\\n') = %d\n", ft_isprint(test4));       // Expected: 0
    printf("ft_isprint(127) = %d\n", ft_isprint(test5));         // Expected: 0

    return 0;
}
*/