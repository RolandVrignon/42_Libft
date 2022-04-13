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