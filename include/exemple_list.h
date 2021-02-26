/*
** EPITECH PROJECT, 2021
** liste
** File description:
** exemple_list
*/

#ifndef EXEMPLE_LIST_H_
#define EXEMPLE_LIST_H_

#include <stdlib.h>
#include <stdio.h>

typedef struct list_t
{
    struct list_t *next, *first;
    int number;
}list_s;

void free_list(list_s *list);
void add_new_node(list_s *list);
list_s *initialise_first_node(void);


#endif /* !EXEMPLE_LIST_H_ */
