#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n){
    size_t i;
    char *str1;
    char *str2;

    i = 0;
    str1 = dest;
    str2 = (char *)src;
    if (str1 < str2)
        while (i < n){
            str1[i] = str2[i];
            i++;
        }
    else
        while (n > 0){
            str1[n - 1] = str2[n - 1];
            n--;
        }
    return (dest);
}