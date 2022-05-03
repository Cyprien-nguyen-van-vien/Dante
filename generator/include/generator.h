/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** Generator header
*/

#ifndef GENERATOR_H
    #define GENERATOR_H

    #include <stdbool.h>

typedef struct maze_s {
    int x;
    int y;
    bool perfect;
} maze_t;

typedef struct coord_s {
    int x;
    int y;
    int next_x;
    int next_y;
    struct coord_s *next;
    struct coord_s *prev;
} coord_t;

// Core functions
int generator(int argc, char **argv);
int error_handling(int argc, char **argv, maze_t *maze);
char **generate_imperfect(maze_t *maze);
char **generate_perfect(maze_t *maze);

// Linked lists
int list_size(coord_t *list);
void list_append(coord_t **list, coord_t *new);
void list_free(coord_t *list);
coord_t *node_copy(coord_t *node);

// Maze generation
int make_move(coord_t **moves, coord_t **pos, char **map, coord_t *max);
coord_t *find_moves(char **map, coord_t *pos, coord_t *max);
coord_t *select_move(coord_t *moves);
char **create_map(maze_t *maze);
void print_map(char **map);

#endif
