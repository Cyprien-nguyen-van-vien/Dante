/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** Linked list management
*/

#include <stdlib.h>
#include "solver.h"

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

coord_t *list_find(coord_t *list, coord_t *coord)
{
    coord_t *current = list;

    while (current != NULL) {
        if (current->x == coord->x && current->y == coord->y) {
            return (current);
        }
        current = current->prev;
    }
    return (NULL);
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

coord_t *node_copy(coord_t *node)
{
    coord_t *new = malloc(sizeof(coord_t));

    new->x = node->x;
    new->y = node->y;
    new->next = NULL;
    new->prev = NULL;
    return (new);
}
