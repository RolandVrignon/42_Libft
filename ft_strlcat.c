#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    unsigned int i;
    unsigned int j;
    size_t d_len;

    i = 0;
    d_len = ft_strlen(dst);
    j = d_len;
    if (d_len >= size)
        return (size + ft_strlen(src));
    else
    {
        while (j < size - j - 1 && src[i] != '\0')
        {
            dst[j + i] = src[i];
            i++;
        }
        dst[j + i] = '\0';
        return (ft_strlen(src) + d_len);
    }
}