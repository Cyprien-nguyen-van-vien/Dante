/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strrep function
*/

#include <stdlib.h>
#include "my.h"

static char *replace(char *str, char const *pattern, char const *new, int index)
{
    int size = my_strlen(str);
    int size2 = my_strlen(pattern);
    int size3 = my_strlen(new);
    int total = size - size2 + size3 + 1;
    int j = 0;
    int k = 0;
    char *string = malloc(sizeof(char) * (total + 1));

    for (int i = 0; i < total; i++) {
        if (i < index) {
            string[i] = str[i];
        } else if (i < index + size3) {
            string[i] = new[j];
            j++;
        } else {
            string[i] = str[index + size2 + k];
            k++;
        }
    }
    return (string);
}

static int is_same_char(char *str, char const *to_find, int index)
{
    int result = 0;

    if (str[index] == to_find[0]) {
        result = 1;
    }
    return (result);
}

char *my_strrep(char *str, char const *pattern, char const *new)
{
    int size2 = my_strlen(pattern);
    int same = 0;

    if (size2 == 0) {
        return (str);
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == pattern[same] && same + 1 == size2) {
            str = replace(str, pattern, new, i - size2 + 1);
            return (str);
        } else if (str[i] == pattern[same]) {
            same++;
        } else {
            same = is_same_char(str, pattern, i);
        }
    }
    return (str);
}
