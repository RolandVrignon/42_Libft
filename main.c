#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <limits.h>

int main(void)
{
    char dest[30]; memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	dest[0] = 'B';
    printf("ft_itoa : %ld\n", ft_strlcat(dest, src, 6));
}