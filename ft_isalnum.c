/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:37:58 by rvrignon          #+#    #+#             */
/*   Updated: 2022/04/29 17:37:59 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

int ft_isalnum(int c){
    if(ft_isalpha(c) || ft_isdigit(c))
        return (1);
    return (0);
}