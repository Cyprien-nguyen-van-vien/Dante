/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** Moves
*/

#include <stdlib.h>
#include "solver.h"

static int check_pos(char **map, coord_t *pos, coord_t *max)
{
    if (pos->x < 0 || pos->x >= max->x || pos->y < 0 || pos->y >= max->y) {
        return (0);
    }
    return (map[pos->x][pos->y] == '*');
}

coord_t *find_moves(char **map, coord_t *pos, coord_t *max)
{
    coord_t *found = NULL;
    coord_t up = { pos->x - 1, pos->y, NULL, NULL };
    coord_t down = { pos->x + 1, pos->y, NULL, NULL };
    coord_t left = { pos->x, pos->y - 1, NULL, NULL };
    coord_t right = { pos->x, pos->y + 1, NULL, NULL };
    coord_t *list[4] = { &down, &right, &up, &left };
    coord_t *move = NULL;

    for (int i = 0; i < 4; i++) {
        if (check_pos(map, list[i], max) && list_find(pos, list[i]) == NULL) {
            move = malloc(sizeof(coord_t));
            move->x = list[i]->x;
            move->y = list[i]->y;
            move->next = NULL;
            move->prev = NULL;
            list_append(&found, move);
        }
    }
    return (found);
}

coord_t *select_move(coord_t *moves, char **map)
{
    (void) map;
    return moves;
}
