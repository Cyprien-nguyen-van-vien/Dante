/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_free_arrays function
*/

#include <stdlib.h>
#include "my.h"

void my_free_arrays(int number, ...)
{
    va_list list;
    void **element;

    va_start(list, number);
    for (int i = 0; i < number; i++) {
        element = va_arg(list, void **);
        for (int j = 0; element[j] != NULL; j++) {
            free(element[j]);
        }
        free(element);
    }
    va_end(list);
}
