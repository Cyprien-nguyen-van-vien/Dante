/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** Linked list management
*/

#include <stdlib.h>
#include "generator.h"

void list_append(coord_t **list, coord_t *new)
{
    coord_t *current = *list;

    if (*list == NULL) {
        *list = new;
        return;
    }
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new;
    new->prev = current;
}

void list_free(coord_t *list)
{
    coord_t *current = list;
    coord_t *tmp = NULL;

    while (current != NULL) {
        tmp = current;
        current = current->next;
        free(tmp);
    }
}

int list_size(coord_t *list)
{
    int size = 1;
    coord_t *current = list;

    if (current == NULL) {
        return (0);
    }
    while (current->next != NULL) {
        size++;
        current = current->next;
    }
    return (size);
}

coord_t *node_copy(coord_t *node)
{
    coord_t *new = malloc(sizeof(coord_t));

    new->x = node->x;
    new->y = node->y;
    new->next_x = node->next_x;
    new->next_y = node->next_y;
    new->next = NULL;
    new->prev = NULL;
    return (new);
}
