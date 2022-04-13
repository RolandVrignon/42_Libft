#include "libft.h"
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size){
    void *ptr;
    size_t i;

    i = 0;
    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return (NULL);
    while (i < nmemb * size){
        ((char *)ptr)[i] = 0;
        i++;
    }
    return (ptr);
}