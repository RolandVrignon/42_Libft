/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:39:40 by rvrignon          #+#    #+#             */
/*   Updated: 2022/04/29 17:43:11 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content){
    t_list *new;

    if (!(new = (t_list *)malloc(sizeof(t_list))))
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}