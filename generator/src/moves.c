/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** Moves
*/

#include <stdlib.h>
#include "generator.h"

static int check_pos(char **map, coord_t *pos, coord_t *max)
{
    if (pos->next_x < 0 || pos->next_x >= max->x) {
        return (0);
    } else if (pos->next_y < 0 || pos->next_y >= max->y) {
        return (0);
    }
    return map[pos->x][pos->y] == 'X' && map[pos->next_x][pos->next_y] == 'X';
}

coord_t *find_moves(char **map, coord_t *pos, coord_t *max)
{
    coord_t *found = NULL;
    coord_t up = { pos->x - 1, pos->y, pos->x - 2, pos->y, NULL, NULL };
    coord_t down = { pos->x + 1, pos->y, pos->x + 2, pos->y, NULL, NULL };
    coord_t left = { pos->x, pos->y - 1, pos->x, pos->y - 2, NULL, NULL };
    coord_t right = { pos->x, pos->y + 1, pos->x, pos->y + 2, NULL, NULL };
    coord_t *list[4] = { &down, &right, &up, &left };
    coord_t *move = NULL;

    for (int i = 0; i < 4; i++) {
        if (check_pos(map, list[i], max)) {
            move = node_copy(list[i]);
            list_append(&found, move);
        }
    }
    return (found);
}

coord_t *select_move(coord_t *moves)
{
    coord_t *current = moves;
    int size = list_size(moves);
    int value = 0;

    if (size == 0) {
        return (NULL);
    }
    value = rand() % size;
    current = moves;
    for (int i = 0; i < value; i++) {
        current = current->next;
    }
    return (current);
}
