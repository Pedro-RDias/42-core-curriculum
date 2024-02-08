#ifndef LIST_H
#define LIST_H

typedef struct node {
  int data;
  struct node *next;
} t_node;

t_node *get_last(t_node *lst);
void swap(t_node **lst);
void push(t_node **src, t_node **dest);
void rotate(t_node **lst);
void reverse_rotate(t_node **lst);


#endif
