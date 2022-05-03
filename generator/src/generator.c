/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** Generator
*/

#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "generator.h"
#include "my.h"

int generator(int argc, char **argv)
{
    maze_t maze = { 0, 0, false };
    char **map = NULL;

    if (error_handling(argc, argv, &maze)) {
        return (84);
    }
    srand(time(NULL) + (long) &maze);
    maze.x = atoi(argv[1]);
    maze.y = atoi(argv[2]);
    maze.perfect = (argc > 3 && strcmp(argv[3], "perfect") == 0);
    if (maze.perfect) {
        map = generate_perfect(&maze);
    } else {
        map = generate_imperfect(&maze);
    }
    if (map != NULL) {
        print_map(map);
        my_free_arrays(1, map);
    }
    return (0);
}
