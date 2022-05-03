/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strncmp function
*/

#include "my.h"

static int check_nsize(char const *, int, int);

int my_strncmp(char const *s1, char const *s2, int n)
{
    int result = 0;

    for (int i = 0; i < n && s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] != s2[i] && result == 0) {
            result = s1[i] - s2[i];
        }
    }
    if (result == 0 ){
        result = check_nsize(s1, my_strlen(s2), n);
    }
    return (result);
}

static int check_nsize(char const *str, int size, int n)
{
    char result = 0;

    if (size <= n)
        result = str[size];
    return (result);
}
