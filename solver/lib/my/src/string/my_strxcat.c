/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strxcat function
*/

#include "my.h"

void my_strxcat(char *dest, char *source, int index)
{
    int size = my_strlen(source);

    for (int i = 0; i < size; i++) {
        dest[i + index] = source[i];
    }
}
