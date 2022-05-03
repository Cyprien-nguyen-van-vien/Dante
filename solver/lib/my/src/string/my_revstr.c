/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_revstr function
*/

#include "my.h"

char *my_revstr(char *str)
{
    int size = my_strlen(str);
    char arr[size];
    int a = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        arr[a] = str[size - i - 1];
        a++;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = arr[i];
    }
    return (str);
}
