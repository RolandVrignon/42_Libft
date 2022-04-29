#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    char src[] = "coucou";
	char dest[10]; memset(dest, 'A', 10);
    
    // printf("Test = %d\n", 371 % 256);
    
    printf("ft_substr : %s\n", ft_substr("BONJOUR LES HARICOTS !", 8, 14));
    //printf("substr : %d\n", substr("tripouille", 100, 1));
    // printf("strrchr : %d", strlcpy(dest, src, -1));
}