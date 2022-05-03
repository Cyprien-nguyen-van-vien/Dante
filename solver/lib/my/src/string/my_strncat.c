/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strncat function
*/

#include <stdlib.h>
#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int size = my_strlen(dest);
    int size2 = MIN(my_strlen(src), nb);
    char *new = malloc(sizeof(char) * (size + size2 + 1));

    for (int i = 0; i < size + size2; i++) {
        if (i < size) {
            new[i] = dest[i];
        } else {
            new[i] = src[i - size];
        }
    }
    new[size + size2] = '\0';
    return (new);
}
