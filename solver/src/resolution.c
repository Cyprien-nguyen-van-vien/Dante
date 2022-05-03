/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** Map resolution
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "solver.h"

static void go_back(coord_t **pos, char **map)
{
    coord_t *tmp = *pos;

    map[tmp->x][tmp->y] = 'X';
    *pos = pos[0]->prev;
    pos[0]->next = NULL;
    free(tmp);
}

static int make_move(coord_t **moves, coord_t **pos, char **map, coord_t *max)
{
    coord_t *array = find_moves(map, *pos, max);
    coord_t *new = NULL;
    coord_t *select = NULL;

    if (array == NULL) {
        if (moves[0]->next != NULL) {
            go_back(pos, map);
        }
    } else {
        select = select_move(array, map);
        new = node_copy(select);
        new->prev = *pos;
        pos[0]->next = new;
        *pos = new;
    }
    list_free(array);
    return (array != NULL || moves[0]->next != NULL);
}

void solve_map(char **map)
{
    char **dup = duplicate_map(map);
    coord_t def = { 0, 0, NULL, NULL };
    coord_t *list = node_copy(&def);
    coord_t *pos = list;
    coord_t max = { my_arraylen(map), my_strlen(map[0]), NULL, NULL };
    int out = 0;

    while (!out) {
        if (pos->x == max.x - 1 && pos->y == max.y - 1) {
            print_map(dup, list);
            out = 1;
        } else if (!make_move(&list, &pos, map, &max)) {
            printf("no solution found");
            out = 1;
        }
    }
    list_free(list);
}
