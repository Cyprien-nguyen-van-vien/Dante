/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** Map printer
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "solver.h"

void print_map(char **map, coord_t *list)
{
    coord_t *current = list;
    int size = my_arraylen(map);

    while (current != NULL) {
        map[current->x][current->y] = 'o';
        current = current->next;
    }
    for (int i = 0; i < size; i++) {
        my_putstr(map[i]);
        if (i < size - 1) {
            my_putstr("\n");
        }
    }
    my_free_arrays(1, map);
}

char **duplicate_map(char **map)
{
    int size = my_arraylen(map);
    char **new = malloc(sizeof(char *) * (size + 1));

    for (int i = 0; i < size; i++) {
        new[i] = my_strdup(map[i]);
    }
    new[size] = NULL;
    return (new);
}
