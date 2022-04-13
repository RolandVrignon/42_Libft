#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *tmp;
    t_list *tmp2;

    tmp = *lst;
    while (tmp)
    {
        tmp2 = tmp->next;
        if (del)
            del(tmp->content);
        free(tmp);
        tmp = tmp2;
    }
    *lst = NULL;
}