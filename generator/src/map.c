/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** Map management
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "generator.h"

char **create_map(maze_t *maze)
{
    char **map = malloc(sizeof(char *) * (maze->y + 1));

    for (int i = 0; i < maze->y; i++) {
        map[i] = malloc(sizeof(char) * (maze->x + 1));
        for (int j = 0; j < maze->x; j++) {
            map[i][j] = 'X';
        }
        map[i][maze->x] = '\0';
    }
    map[maze->y] = NULL;
    return (map);
}

void print_map(char **map)
{
    int size = my_arraylen(map);

    for (int i = 0; i < size; i++) {
        my_printf("%s", map[i]);
        if (i < size - 1) {
            my_printf("%s", "\n");
        }
    }
}
