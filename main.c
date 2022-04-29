#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <limits.h>

int main(void)
{
    char src[] = "coucou";
	char dest[10]; memset(dest, 'A', 10);
    printf("ft_itoa : %ld\n", ft_strlcpy(dest, src, -1));
}