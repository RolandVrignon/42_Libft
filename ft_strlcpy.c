#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size){
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (src[j] != '\0')
        j++;
    if (size <= i)
        return (j + size);
    while (i < size - 1){
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (j + i);
}