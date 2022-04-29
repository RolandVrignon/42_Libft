/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:41:38 by rvrignon          #+#    #+#             */
/*   Updated: 2022/04/29 17:41:39 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    size_t i;

    if (!s)
        return (NULL);
    if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
        return (NULL);
    i = -1;
    while (s[++i])
        str[i] = f(i, s[i]);
    str[i] = '\0';
    return (str);
}