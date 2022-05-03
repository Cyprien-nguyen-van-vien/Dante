/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_str_to_word_array function
*/

#include <stdlib.h>
#include "my.h"

static int is_char_alpha(char c)
{
    int result = 0;

    if (c < 48 || (c > 57 && c < 63) || (c > 90 && c < 97) || c > 122) {
        result = 1;
    }
    return (result);
}

static int get_words(char const *str)
{
    int count = 1;
    int old = 0;
    int new = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        new = is_char_alpha(str[i]);
        if (new == 1 && old == 0) {
            count++;
        }
        old = new;
    }
    return (count);
}

static void append_end(char const *str, char **arr, int count, int current)
{
    int length = my_strlen(str);
    int size = get_words(str);
    char *array;

    if (is_char_alpha(str[length - 1]) == 0) {
        array = my_substr(str, current, length);
        arr[count] = array;
    } else {
        arr[count] = NULL;
    }
    arr[size] = NULL;
}

char **my_str_to_word_array(char const *str)
{
    int count = 0;
    int current = 0;
    int size = get_words(str);
    int length = my_strlen(str);
    char **arr = malloc(sizeof(char *) * (size + 1));
    char *array = NULL;

    for (int i = 0; str[i] != '\0'; i++) {
        if (is_char_alpha(str[i]) == 1 && current == i) {
            current = i + 1;
        } else if (is_char_alpha(str[i]) == 1) {
            array = my_substr_size(str, current, i, length);
            current = i + 1;
            arr[count] = array;
            count++;
        }
    }
    append_end(str, arr, count, current);
    return (arr);
}
