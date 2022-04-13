#include "libft.h"

char *ft_itoa(int n)
{
    char *str;
    int i;
    int j;
    int k;

    if (n == -2147483648)
        return (ft_strdup("-2147483648"));
    i = 0;
    j = 0;
    k = 0;
    if (n < 0)
    {
        k = 1;
        n = -n;
    }
    while (n > 0)
    {
        j++;
        n = n / 10;
    }
    if (!(str = (char *)malloc(sizeof(char) * (j + k + 1))))
        return (NULL);
    i = 0;
    j = 0;
    while (j < k)
    {
        str[i] = '-';
        i++;
        j++;
    }
    while (n > 0)
    {
        str[i] = n % 10 + '0';
        n = n / 10;
        i++;
    }
    str[i] = '\0';
    return (str);
}