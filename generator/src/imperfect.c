/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** Imperfect maze generation
*/

#include <stdlib.h>
#include "generator.h"
#include "my.h"

static void apply_cluster(char **map, int x, int y, int size)
{
    int cluster = size + 2;
    int loop = size + 1;

    for (int i = x - cluster + 1; i < x + cluster; i++) {
        for (int j = y - cluster + 1; j < y + cluster; j++) {
            map[i][j] = '*';
        }
    }
    for (int i = x - loop + 1; i < x + loop; i++) {
        for (int j = y - loop + 1; j < y + loop; j++) {
            map[i][j] = 'X';
        }
    }
    for (int i = x - size + 1; i < x + size; i++) {
        for (int j = y - size + 1; j < y + size; j++) {
            map[i][j] = '*';
        }
    }
}

static void apply_loop(char **map, int x, int y, int size)
{
    int loop = size + 1;
    for (int i = x - loop + 1; i < x + loop; i++) {
        for (int j = y - loop + 1; j < y + loop; j++) {
            map[i][j] = '*';
        }
    }
    for (int i = x - size + 1; i < x + size; i++) {
        for (int j = y - size + 1; j < y + size; j++) {
            map[i][j] = 'X';
        }
    }
}

static void build_imperfection(maze_t *maze, char **map, int max)
{
    int type = 0;
    int size = 0;
    int x = 0;
    int y = 0;

    size = rand() % max;
    type = rand() % 2;
    if (type == 1) {
        x = rand() % (maze->y - (size + 3) * 2) + size + 3;
        y = rand() % (maze->x - (size + 3) * 2) + size + 3;
        apply_cluster(map, x, y, size);
    } else {
        x = rand() % (maze->y - (size + 2) * 2) + size + 2;
        y = rand() % (maze->x - (size + 2) * 2) + size + 2;
        apply_cluster(map, x, y, size);
    }
}

char **generate_imperfect(maze_t *maze)
{
    char **map = generate_perfect(maze);
    int num = (maze->x * maze->y) / (maze->x + maze->y);
    int max = my_square_root(num);

    if (maze->x < 3 || maze->y < 3) {
        return map;
    } else if (maze->x < 5 || maze->y < 5) {
        apply_loop(map, maze->y / 2, maze->x / 2, 1);
        return (map);
    }
    for (int i = 0; i < num; i++) {
        build_imperfection(maze, map, max);
    }
    return (map);
}
