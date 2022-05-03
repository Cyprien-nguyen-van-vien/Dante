/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** Map resolution
*/

#include <stdio.h>
#include <stdlib.h>
#include "generator.h"

static void go_back(coord_t **pos)
{
    coord_t *tmp = *pos;

    *pos = pos[0]->prev;
    pos[0]->next = NULL;
    free(tmp);
}

int make_move(coord_t **moves, coord_t **pos, char **map, coord_t *max)
{
    coord_t *array = find_moves(map, *pos, max);
    coord_t *new = NULL;
    coord_t *select = NULL;

    if (array == NULL) {
        if (moves[0]->next != NULL)
            go_back(pos);
    } else {
        select = select_move(array);
        new = node_copy(select);
        map[new->x][new->y] = '*';
        map[new->next_x][new->next_y] = '*';
        new->prev = *pos;
        pos[0]->next = new;
        *pos = new;
        new->x = new->next_x;
        new->y = new->next_y;
    }
    list_free(array);
    return (array != NULL || moves[0]->next != NULL);
}
