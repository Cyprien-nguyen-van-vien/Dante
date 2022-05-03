/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** Solver header
*/

#ifndef SOLVER_H
    #define SOLVER_H

typedef struct coord_s {
    int x;
    int y;
    struct coord_s *next;
    struct coord_s *prev;
} coord_t;

int solver(int argc, char **argv);
char *file_read(char const *path);
char **duplicate_map(char **map);
void list_append(coord_t **list, coord_t *new);
void list_free(coord_t *list);
void print_map(char **map, coord_t *list);
void solve_map(char **map);
coord_t *list_find(coord_t *list, coord_t *coord);
coord_t *find_moves(char **map, coord_t *pos, coord_t *max);
coord_t *node_copy(coord_t *node);
coord_t *select_move(coord_t *moves, char **map);

#endif
