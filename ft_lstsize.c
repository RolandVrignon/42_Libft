/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:39:45 by rvrignon          #+#    #+#             */
/*   Updated: 2022/04/29 17:39:46 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

int ft_lstsize(t_list *lst){
    int i = 0;
    t_list *tmp;

    if (!lst)
        return (0);
    tmp = lst;
    while (tmp){
        i++;
        tmp = tmp->next;
    }
    return (i);
}