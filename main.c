#include <stdio.h>
#include "libft.h"

int main(void)
{
    const char *test = "894987";
    
    printf("ft_atoi : %d\n", ft_atoi(test));
    printf("atoi : %d", atoi(test));
}