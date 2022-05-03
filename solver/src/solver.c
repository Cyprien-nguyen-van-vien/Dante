/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** Solver
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "solver.h"

static int scan_line(char *line)
{
    int size = my_strlen(line);

    for (int i = 0; i < size; i++) {
        if (line[i] != '*' && line[i] != 'X') {
            return (1);
        }
    }
    return (0);
}

static int scan_map(char **map)
{
    int size = my_arraylen(map);
    int len = my_strlen(map[0]);

    for (int i = 0; i < size; i++) {
        if (scan_line(map[i]) || my_strlen(map[i]) != len) {
            fprintf(stderr, "Error: Invalid map\n");
            return (84);
        }
    }
    if (map[0][0] != '*' || map[size - 1][len - 1] != '*') {
        fprintf(stderr, "Error: Invalid map\n");
        return (84);
    }
    solve_map(map);
    return (0);
}

int solver(int argc, char **argv)
{
    char *file = NULL;
    char **map = NULL;
    int out = 0;

    if (argc != 2) {
        fprintf(stderr, "Error: Number of arguments\n");
        return (84);
    }
    file = file_read(argv[1]);
    if (file == NULL || my_strlen(file) == 0) {
        fprintf(stderr, "Error: Unable to read file\n");
        return (84);
    }
    map = my_strsplit(file, '\n');
    out = scan_map(map);
    my_free_arrays(1, map);
    free(file);
    return (out);
}
