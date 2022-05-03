/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** Perfect maze generation
*/

#include "generator.h"
#include "my.h"
#include <stdlib.h>

static void fix_even_map(maze_t *maze, char **map, coord_t *max)
{
    map[max->x - 1][max->y - 1] = '*';
    if (maze->x % 2 == 0 && map[max->x - 1][max->y - 2] != '*') {
        map[max->x - 2][max->y - 1] = '*';
    } else if (maze->y % 2 == 0 && map[max->x - 2][max->y - 1] != '*') {
        map[max->x - 1][max->y - 2] = '*';
    }
}

char **generate_perfect(maze_t *maze)
{
    char **map = create_map(maze);
    coord_t def = { 0, 0, 0, 0, NULL, NULL };
    coord_t *list = node_copy(&def);
    coord_t *pos = list;
    coord_t max = { my_arraylen(map), my_strlen(map[0]), 0, 0, NULL, NULL };
    int out = 0;

    map[0][0] = '*';
    while (!out) {
        if (!make_move(&list, &pos, map, &max)) {
            out = 1;
        }
    }
    fix_even_map(maze, map, &max);
    return (map);
}
