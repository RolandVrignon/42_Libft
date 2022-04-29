/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:41:46 by rvrignon          #+#    #+#             */
/*   Updated: 2022/04/29 17:41:46 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len){
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (big[i] != '\0' && i < len){
        if (big[i] == little[j]){
            while (big[i] == little[j] && j < ft_strlen(little) && i < len){
                i++;
                j++;
            }
            if (j == ft_strlen(little)){
                return ((char *)big + i - j);
            }
            i = i - j + 1;
            j = 0;
        }
        i++;
    }
    return (NULL);
}