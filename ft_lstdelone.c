/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:39:18 by rvrignon          #+#    #+#             */
/*   Updated: 2022/04/29 17:39:19 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (del)
        del(lst->content);
    free(lst);
}