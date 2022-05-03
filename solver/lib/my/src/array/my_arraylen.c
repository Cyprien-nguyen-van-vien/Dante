/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_array_size function
*/

#include <stddef.h>
#include "my.h"

int my_arraylen(char **array)
{
    int size = 0;

    for (size = 0; array[size] != NULL; size++);
    return (size);
}
