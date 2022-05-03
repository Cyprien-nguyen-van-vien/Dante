/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_str_contains function
*/

#include "my.h"

static int is_same_char(char const *str, char const *to_find, int index)
{
    int result = 0;

    if (str[index] == to_find[0]) {
        result = 1;
    }
    return (result);
}

int my_str_contains(char const *str, char const *to_find)
{
    int size_2 = my_strlen(to_find);
    int same = 0;

    if (size_2 == 0)
        return (0);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == to_find[same] && same + 1 == size_2) {
            return (0);
        } else if (str[i] == to_find[same]) {
            same++;
        } else {
            same = is_same_char(str, to_find, i);
        }
    }
    return (1);
}
