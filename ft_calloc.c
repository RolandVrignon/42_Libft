/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:37:52 by rvrignon          #+#    #+#             */
/*   Updated: 2022/04/29 17:37:53 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



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