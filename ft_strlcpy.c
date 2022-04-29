#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t src_length;
    size_t i;

	src_length = ft_strlen(src);
	i = 0;
	if (src_length + 1 < size)
	{
		while (i <= src_length + 1)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else if (size != 0)
	{
		while (i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[size - 1] = '\0';
	}
	return (src_length);
}