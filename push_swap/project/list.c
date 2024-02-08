#include "list.h"
#include <stdlib.h>

t_node *get_last(t_node *lst) {
    if (!lst)
        return (NULL);
    while (lst->next)
        lst = lst->next;
    return (lst);
}

void swap(t_node **lst) {
    t_node *tmp;
    if (!*lst || !(*lst)->next)
        return;

    tmp = *lst;
    *lst = (*lst)->next;
    tmp->next = (*lst)->next;
    (*lst)->next = tmp;
}


void push(t_node **src, t_node **dest) {
    t_node *tmp;
    if (!*src)
        return;
    tmp = *src;
    *src = (*src)->next;
    tmp->next = *dest;
    *dest = tmp;
}

void rotate(t_node **lst) {
    t_node *tmp;
    if (!*lst || !(*lst)->next)
        return;
    t_node *last = get_last(*lst);
    tmp = *lst;
    *lst = (*lst)->next;
    tmp->next = NULL;
    last->next = tmp;
}

void reverse_rotate(t_node **lst) {
    t_node *tmp;
    t_node *last;
    if (!*lst || !(*lst)->next)
        return;
    last = get_last(*lst);
    tmp = *lst;
    while (tmp->next != last)
        tmp = tmp->next;
    tmp->next = NULL;
    last->next = *lst;
    *lst = last;
}
