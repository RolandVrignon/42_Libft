#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int n = INT_MIN;
    printf("number  : %d\n", n);
    printf("ft_itoa : %s\n", ft_itoa(n));
}