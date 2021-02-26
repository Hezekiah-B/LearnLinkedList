/*
** EPITECH PROJECT, 2021
** liste
** File description:
** test_list
*/

#include "exemple_list.h"
#include <criterion/criterion.h>

Test(test_first_node, should_success_if_first_node_exist)
{
    list_s *la = initialise_first_node();
    cr_assert(la != NULL, "Error : first node not exist\n");
}

Test(test_first_node, should_success_if_first_link_exist)
{
    list_s *la = initialise_first_node();
    cr_assert(la->first != NULL, "Error : la->first not linked\n");
}

Test(test_first_node, should_success_if_next_link_exist)
{
    list_s *la = initialise_first_node();
    cr_assert(la->next == NULL, "Error : la->next not init to null\n");
}

Test(test_first_node, should_success_if_number_is_init)
{
    list_s *la = initialise_first_node();
    cr_assert(la->number == 0, "Error : la->number not init to 0\n");
}

Test(test_create_list, should_success_if_list_of_five_elem_is_correct)
{
    list_s *la = initialise_first_node();
    for (int i = 0; i < 5; i++) {
        add_new_node(la);
        la = la->next;
        cr_assert(la != NULL, "Error : new node is null\n");
    }
}

Test(test_create_list, should_success_if_first_link_to_list_of_five_elem_is_correct)
{
    list_s *la = initialise_first_node();
    list_s *first = la->first;
    for (int i = 0; i < 5; i++) {
        add_new_node(la);
        la = la->next;
        cr_assert(la->first != NULL && la->first == first, "Error : first link of new node is null or not have good link\n");
    }
}

Test(test_create_list, should_success_if_next_link_to_list_of_five_elem_is_correct)
{
    list_s *la = initialise_first_node();
    for (int i = 0; i < 5; i++) {
        add_new_node(la);
        cr_assert(la->next != NULL, "Error : next link\n");
        la = la->next;
        cr_assert(la->next == NULL, "Error : next link\n");
    }
}

Test(test_create_list, should_success_if_number_is_init_to_list_of_five_elem_is_correct)
{
    list_s *la = initialise_first_node();
    for (int i = 0; i < 5; i++) {
        cr_assert(la->number == i, "Error : number is not good, want %d, get %d \n", i, la->number);
        add_new_node(la);
        la = la->next;
    }
}
