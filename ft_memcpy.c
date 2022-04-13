#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n){
    size_t i;
    char *str1;
    char *str2;

    i = 0;
    str1 = dest;
    str2 = (char *)src;
    while (i < n){
        str1[i] = str2[i];
        i++;
    }
    return (dest);
}