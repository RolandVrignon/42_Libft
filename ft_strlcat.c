#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size){
    size_t i;
    size_t j;
    size_t k;

    i = 0;
    j = 0;
    k = 0;
    while (dst[i] != '\0')
        i++;
    while (src[j] != '\0')
        j++;
    if (size <= i)
        return (j + size);
    while (i < size - 1){
        dst[i] = src[k];
        i++;
        k++;
    }
    dst[i] = '\0';
    return (j + i);
}