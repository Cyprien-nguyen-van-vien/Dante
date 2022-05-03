/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strsplit function
*/

#include <stdlib.h>
#include "my.h"

static void append_end(char const *str, char separator,  char **arr, int *info)
{
    int length = my_strlen(str);
    char *array = NULL;

    if (str[length - 1] != separator) {
        array = my_substr(str, info[1], length);
        arr[info[0]] = array;
        arr[info[0] + 1] = NULL;
    } else {
        arr[info[0]] = NULL;
    }
}

static int get_occurences(char const *str, char operator)
{
    int count = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == operator) {
            count++;
        }
    }
    return (count);
}

char **my_strsplit(char const *str, char separator)
{
    int info[2] = { 0, 0 };
    int length = my_strlen(str);
    int size = get_occurences(str, separator);
    char **arr = malloc(sizeof(char *) * (size + 1));
    char *array = NULL;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == separator) {
            array = my_substr_size(str, info[1], i, length);
            info[1] = i + 1;
            arr[info[0]] = array;
            info[0] += 1;
        }
    }
    append_end(str, separator, arr, info);
    return (arr);
}
