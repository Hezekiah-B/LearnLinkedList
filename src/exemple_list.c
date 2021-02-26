/*
** EPITECH PROJECT, 2021
** linked_list
** File description:
** manage_list
*/

#include "../include/exemple_list.h"

list_s *initialise_first_node(void)
{
    list_s *first = malloc(sizeof(list_s));
    first->number = 0;
    first->next = NULL;
    first->first = first;
    return (first);
}

void add_new_node(list_s *list)
{
    list_s *next = malloc(sizeof(list_s));
    next->first = list->first;
    next->number = list->number + 1;
    next->next = NULL;
}

void free_list(list_s *list)
{
    if (list->first != NULL) {
        list_s *delete = list->first;
        list->first = list->first->next;
        free(delete);
        free_list(list);
    }
}
