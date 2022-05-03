/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strdup function
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *src)
{
    int size = my_strlen(src);
    char *str = malloc(sizeof(char) * (size + 1));

    for (int i = 0; i < size; i++) {
        str[i] = src[i];
    }
    str[size] = '\0';
    return (str);
}
