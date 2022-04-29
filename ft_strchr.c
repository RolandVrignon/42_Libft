#include "libft.h"

char *ft_strchr(const char *s, int c){
    int i;

    i = 0;
    if (c > 255)
        c = c % 256;
    while (s[i] != '\0'){
        if (s[i] == c)
            return ((char *)s + i);
        i++;
    }
    if (c == '\0')
        return ((char *)s + i);
    return (NULL);
}