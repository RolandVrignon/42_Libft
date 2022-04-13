#include "libft.h"

int ft_atoi(const char *nptr)
{
    int i;
    int positif;
    int nb;

    i = 0;
    nb = 0;
    positif = 1;
    while (nptr[i] <= ' ')
        i++;
    if (nptr[i] == '-')
        positif = positif * -1;
    if (nptr[i] == '-' || nptr[i] == '+')
        i++;
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        nb = nb * 10 + (nptr[i] - '0');
        i++;
    }
    return (nb * positif);
}