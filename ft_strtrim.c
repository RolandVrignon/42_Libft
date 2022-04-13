#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    int k;
    char *str;

    if (!s1 || !set)
        return (NULL);
    i = 0;
    j = 0;
    k = 0;
    while (s1[i] && ft_strchr(set, s1[i]))
        i++;
    while (s1[i + j] && !ft_strchr(set, s1[i + j]))
        j++;
    if (i + j == 0)
        return (ft_strdup(""));
    str = (char *)malloc(sizeof(char) * (j + 1));
    if (!str)
        return (NULL);
    while (k++ < j)
        str[k] = s1[i + k];
    str[k] = '\0';
    return (str);
}