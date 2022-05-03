/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_sort_string_array function
*/

#include "my.h"

static void swap_pos(char **array, int index, int target)
{
    char *temp = array[index];

    array[index] = array[target];
    array[target] = temp;
}

static int check_array(char **array, int size)
{
    int out = 1;

    for (int i = 0; i < size - 1; i++) {
        if (my_strcmp(array[i], array[i + 1]) > 0) {
            out = 0;
            swap_pos(array, i, i + 1);
        }
    }
    return (out);
}

void my_sort_string_array(char **array)
{
    int end = 0;

    while (end < 1) {
        end = check_array(array, my_arraylen(array));
    }
}
