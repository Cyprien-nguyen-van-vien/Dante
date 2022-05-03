/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** Error handling
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "generator.h"

static int is_a_number(char *number)
{
    char *endptr = NULL;

    strtol(number, &endptr, 10);
    return (strlen(endptr) == 0);
}

static int check_options(int argc, char **argv, maze_t *maze)
{
    if (argc > 3) {
        if (strcmp("perfect", argv[3]) != 0) {
            fprintf(stderr, "Error: Unknown option %s\n", argv[3]);
            return (1);
        } else {
            maze->perfect = true;
        }
    }
    return (0);
}

static int check_numbers(char **argv, maze_t *maze)
{
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    if (x < 1) {
        fprintf(stderr, "Error: Negative x\n");
        return (1);
    } else if (y < 1) {
        fprintf(stderr, "Error: Negative y\n");
        return (1);
    }
    maze->x = x;
    maze->y = y;
    return (0);
}

int error_handling(int argc, char **argv, maze_t *maze)
{
    if (argc < 3 || argc > 4) {
        fprintf(stderr, "Error: Number of arguments\n");
        return (1);
    }
    if (!is_a_number(argv[1])) {
        fprintf(stderr, "Error: Argument 1 is not a number\n");
        return (1);
    } else if (!is_a_number(argv[2])) {
        fprintf(stderr, "Error: Argument 2 is not a number\n");
        return (1);
    }
    return (check_options(argc, argv, maze) || check_numbers(argv, maze));
}
