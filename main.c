#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str = "+1";
    printf("ft_atoi : %d\n", ft_atoi(str));
    printf("atoi : %d\n", atoi(str));
    atoi(str);
    return (0);
}